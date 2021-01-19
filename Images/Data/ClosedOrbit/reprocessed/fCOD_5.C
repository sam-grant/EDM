void fCOD_5()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 21:53:06 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *fCOD_51 = new TF1("fCOD_5",";#theta [rad];y [mm]",0,6.283185, TF1::EAddToList::kDefault);
   fCOD_51->SetFillColor(19);
   fCOD_51->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fCOD_51->SetLineColor(ci);
   fCOD_51->SetLineWidth(3);
   fCOD_51->GetXaxis()->SetTitle("#theta [rad]");
   fCOD_51->GetXaxis()->CenterTitle(true);
   fCOD_51->GetXaxis()->SetLabelFont(42);
   fCOD_51->GetXaxis()->SetTitleSize(0.04);
   fCOD_51->GetXaxis()->SetTitleOffset(1.1);
   fCOD_51->GetXaxis()->SetTitleFont(42);
   fCOD_51->GetYaxis()->SetTitle("y [mm]");
   fCOD_51->GetYaxis()->CenterTitle(true);
   fCOD_51->GetYaxis()->SetNdivisions(4000510);
   fCOD_51->GetYaxis()->SetLabelFont(42);
   fCOD_51->GetYaxis()->SetTitleSize(0.04);
   fCOD_51->GetYaxis()->SetTitleOffset(1.1);
   fCOD_51->GetYaxis()->SetTitleFont(42);
   fCOD_51->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
