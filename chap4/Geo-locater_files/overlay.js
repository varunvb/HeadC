google.maps.__gjsload__('overlay', '\'use strict\';function kT(a){this.j=a}P(kT,T);$a(kT[I],function(a){"outProjection"!=a&&(a=!!(this.get("offset")&&this.get("projectionTopLeft")&&this.get("projection")&&we(this.get("zoom"))),a==!this.get("outProjection")&&this.set("outProjection",a?this.j:null))});function lT(){}function mT(){var a=this.gm_props_;if(this[$n]()){if(this[Pc]()){if(!a.Qf&&this.onAdd)this.onAdd();a.Qf=!0;this.draw()}}else{if(a.Qf)if(this[$c])this[$c]();else this[Gb]();a.Qf=!1}}function nT(a){a.gm_props_=a.gm_props_||new lT;return a.gm_props_}function oT(a){Oj[J](this);this.na=R(a,mT)}P(oT,Oj);function pT(){}\npT[I].j=function(a){var b=a[Xn](),c=nT(a),d=c.Jd;c.Jd=b;d&&(c=nT(a),(d=c.Fa)&&d[Dn](),(d=c.Ri)&&d[Dn](),a[Dn](),a.set("panes",null),a.set("projection",null),Q(c.Z,S[Ab]),c.Z=null,c.pb&&(c.pb.na(),c.pb=null),xs("Ox","-p",a));if(b){c=nT(a);d=c.pb;d||(d=c.pb=new oT(a));Q(c.Z,S[Ab]);var e=c.Fa=c.Fa||new zr,f=b[B];e[p]("zoom",f);e[p]("offset",f);e[p]("center",f,"projectionCenterQ");e[p]("projection",b);e[p]("projectionTopLeft",f);e=c.Ri=c.Ri||new kT(e);e[p]("zoom",f);e[p]("offset",f);e[p]("projection",b);\ne[p]("projectionTopLeft",f);a[p]("projection",e,"outProjection");a[p]("panes",f);e=R(d,d.X);c.Z=[S[A](a,"panes_changed",e),S[A](f,"zoom_changed",e),S[A](f,"offset_changed",e),S[A](b,"projection_changed",e),S[A](f,"projectioncenterq_changed",e),S[v](b,"forceredraw",d)];d.X();b instanceof mh&&(us(b,"Ox"),ws("Ox","-p",a,!!b.aa))}};var qT=new pT;Fh.overlay=function(a){eval(a)};cg("overlay",qT);\n')