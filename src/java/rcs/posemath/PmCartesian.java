/* 
The NIST RCS (Real-time Control Systems) 
library is public domain software, however it is preferred
that the following disclaimers be attached.

Software Copywrite/Warranty Disclaimer

This software was developed at the National Institute of Standards and
Technology by employees of the Federal Government in the course of their
official duties. Pursuant to title 17 Section 105 of the United States
Code this software is not subject to copyright protection and is in the
public domain. NIST Real-Time Control System software is an experimental
system. NIST assumes no responsibility whatsoever for its use by other
parties, and makes no guarantees, expressed or implied, about its
quality, reliability, or any other characteristic. We would appreciate
acknowledgement if the software is used. This software can be
redistributed and/or modified freely provided that any derivative works
bear some notice that they are derived from it, and any modified
versions bear some notice that they have been modified.



 */

/*
 *       New Java File starts here.
 *       This file should be named PmCartesian.java
 */// Set Package Name
package rcs.posemath;

// Import all NML, CMS, and RCS classes and interfaces
import java.util.StringTokenizer;
import rcs.nml.NMLFormatConverter;

/*
 *       Class definition for PmCartesian
 *       Automatically generated by RCS Java Diagnostics Tool.
 *       on Wed Jan 07 10:53:46 EST 1998
 */
public class PmCartesian extends java.awt.geom.Point2D.Double  implements Cloneable {

    public double z = 0;

    public void update(NMLFormatConverter nml_fc) {
        nml_fc.beginClass("PmCartesian", null);
        x = nml_fc.update_with_name("x", x);
        y = nml_fc.update_with_name("y", y);
        z = nml_fc.update_with_name("z", z);
        nml_fc.endClass("PmCartesian", null);
    }

    public PmCartesian() {
        x = 0;
        y = 0;
        z = 0;
    }

    public PmCartesian(double startx, double starty, double startz) {
        x = startx;
        y = starty;
        z = startz;
    }

    public double mag() {
        return Math.sqrt(x * x + y * y + z * z);
    }

    public double distFrom(PmCartesian p) {
        double dx = (x - p.x);
        double dy = (y - p.y);
        double dz = (z - p.z);
        return Math.sqrt(dx * dx + dy * dy + dz * dz);
    }

    public boolean equals(PmCartesian v) throws PmException {
        if (null == v) {
            return false;
        }
        return Posemath.pmCartCartCompare(this, v);
    }

    public boolean equals(PmCylindrical c) throws PmException {
        if (null == c) {
            return false;
        }
        PmCartesian v = new PmCartesian();
        Posemath.pmCylCartConvert(c, v);
        return Posemath.pmCartCartCompare(this, v);
    }

    public boolean equals(PmSpherical s) throws PmException {
        if (null == s) {
            return false;
        }
        PmCartesian v = new PmCartesian();
        Posemath.pmSphCartConvert(s, v);
        return Posemath.pmCartCartCompare(this, v);
    }

    @Override
    public String toString() {
        return String.format(" { x=%+.3g, y=%+.3g, z=%+.3g } ", x, y, z);
    }

    public PmCartesian add(final PmCartesian c) {
        return new PmCartesian(this.x+c.x,this.y+c.y,this.z+c.z);
    }

    public PmCartesian subtract(final PmCartesian c) {
        return new PmCartesian(this.x-c.x,this.y-c.y,this.z-c.z);
    }
    
    public PmCartesian multiply(final double d) {
        return new PmCartesian(this.x*d,this.y*d,this.z*d);
    }

    static public PmCartesian valueOf(String s) {
        PmCartesian c = new PmCartesian();
        StringTokenizer st = new StringTokenizer(s, "{}[];: ,\t\r\n");
        int tok_num = 0;
        while (st.hasMoreTokens()) {
            String tok = st.nextToken();
            if (tok == null || tok.length() < 1) {
                continue;
            }
            tok_num++;
            if (tok.startsWith("x=")) {
                c.x = java.lang.Double.valueOf(tok.substring(2));
            } else if (tok.startsWith("y=")) {
                c.y = java.lang.Double.valueOf(tok.substring(2));
            } else if (tok.startsWith("z=")) {
                c.z = java.lang.Double.valueOf(tok.substring(2));
            } else {
                double d = java.lang.Double.valueOf(tok);
                switch (tok_num) {
                    case 1:
                        c.x = d;
                        break;

                    case 2:
                        c.y = d;
                        break;

                    case 3:
                        c.z = d;
                        break;
                }
            }
        }
        return c;
    }

    @Override
    public PmCartesian clone() {
        PmCartesian cloned_object = (PmCartesian) super.clone();
        return cloned_object;
    }

    /**
     * @return the x
     */
    public double getX() {
        return x;
    }

    /**
     * @param x the x to set
     */
    public void setX(double x) {
        this.x = x;
    }

    /**
     * @return the y
     */
    public double getY() {
        return y;
    }

    /**
     * @param y the y to set
     */
    public void setY(double y) {
        this.y = y;
    }

    /**
     * @return the z
     */
    public double getZ() {
        return z;
    }

    /**
     * @param z the z to set
     */
    public void setZ(double z) {
        this.z = z;
    }
}