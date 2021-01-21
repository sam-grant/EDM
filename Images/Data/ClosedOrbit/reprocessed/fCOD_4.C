void fCOD_4()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 03:29:48 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *fCOD_41 = new TF1("fCOD_4",";#theta [rad];y [mm]",0,6.283185, TF1::EAddToList::kDefault);
   fCOD_41->SetFillColor(19);
   fCOD_41->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fCOD_41->SetLineColor(ci);
   fCOD_41->SetLineWidth(3);
   fCOD_41->GetXaxis()->SetTitle("#theta [rad]");
   fCOD_41->GetXaxis()->CenterTitle(true);
   fCOD_41->GetXaxis()->SetLabelFont(42);
   fCOD_41->GetXaxis()->SetTitleSize(0.04);
   fCOD_41->GetXaxis()->SetTitleOffset(1.1);
   fCOD_41->GetXaxis()->SetTitleFont(42);
   fCOD_41->GetYaxis()->SetTitle("y [mm]");
   fCOD_41->GetYaxis()->CenterTitle(true);
   fCOD_41->GetYaxis()->SetNdivisions(4000510);
   fCOD_41->GetYaxis()->SetLabelFont(42);
   fCOD_41->GetYaxis()->SetTitleSize(0.04);
   fCOD_41->GetYaxis()->SetTitleOffset(1.1);
   fCOD_41->GetYaxis()->SetTitleFont(42);
   fCOD_41->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
