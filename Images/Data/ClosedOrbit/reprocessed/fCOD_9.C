void fCOD_9()
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
   
   TF1 *fCOD_92 = new TF1("fCOD_9",";#theta [rad];y [mm]",0,6.283185, TF1::EAddToList::kDefault);
   fCOD_92->SetFillColor(19);
   fCOD_92->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fCOD_92->SetLineColor(ci);
   fCOD_92->SetLineWidth(3);
   fCOD_92->GetXaxis()->SetTitle("#theta [rad]");
   fCOD_92->GetXaxis()->CenterTitle(true);
   fCOD_92->GetXaxis()->SetLabelFont(42);
   fCOD_92->GetXaxis()->SetTitleSize(0.04);
   fCOD_92->GetXaxis()->SetTitleOffset(1.1);
   fCOD_92->GetXaxis()->SetTitleFont(42);
   fCOD_92->GetYaxis()->SetTitle("y [mm]");
   fCOD_92->GetYaxis()->CenterTitle(true);
   fCOD_92->GetYaxis()->SetNdivisions(4000510);
   fCOD_92->GetYaxis()->SetLabelFont(42);
   fCOD_92->GetYaxis()->SetTitleSize(0.04);
   fCOD_92->GetYaxis()->SetTitleOffset(1.1);
   fCOD_92->GetYaxis()->SetTitleFont(42);
   fCOD_92->SetParameter(0,0);
   fCOD_92->SetParError(0,0);
   fCOD_92->SetParLimits(0,0,0);
   fCOD_92->SetParameter(1,0);
   fCOD_92->SetParError(1,0);
   fCOD_92->SetParLimits(1,0,0);
   fCOD_92->SetParameter(2,0);
   fCOD_92->SetParError(2,0);
   fCOD_92->SetParLimits(2,0,0);
   fCOD_92->SetParameter(3,0);
   fCOD_92->SetParError(3,0);
   fCOD_92->SetParLimits(3,0,0);
   fCOD_92->SetParameter(4,0);
   fCOD_92->SetParError(4,0);
   fCOD_92->SetParLimits(4,0,0);
   fCOD_92->SetParameter(5,0);
   fCOD_92->SetParError(5,0);
   fCOD_92->SetParLimits(5,0,0);
   fCOD_92->SetParameter(6,0);
   fCOD_92->SetParError(6,0);
   fCOD_92->SetParLimits(6,0,0);
   fCOD_92->SetParameter(7,0);
   fCOD_92->SetParError(7,0);
   fCOD_92->SetParLimits(7,0,0);
   fCOD_92->SetParameter(8,0);
   fCOD_92->SetParError(8,0);
   fCOD_92->SetParLimits(8,0,0);
   fCOD_92->SetParameter(9,0);
   fCOD_92->SetParError(9,0);
   fCOD_92->SetParLimits(9,0,0);
   fCOD_92->SetParameter(10,0);
   fCOD_92->SetParError(10,0);
   fCOD_92->SetParLimits(10,0,0);
   fCOD_92->SetParameter(11,0);
   fCOD_92->SetParError(11,0);
   fCOD_92->SetParLimits(11,0,0);
   fCOD_92->SetParameter(12,0);
   fCOD_92->SetParError(12,0);
   fCOD_92->SetParLimits(12,0,0);
   fCOD_92->SetParameter(13,0);
   fCOD_92->SetParError(13,0);
   fCOD_92->SetParLimits(13,0,0);
   fCOD_92->SetParameter(14,0);
   fCOD_92->SetParError(14,0);
   fCOD_92->SetParLimits(14,0,0);
   fCOD_92->SetParameter(15,0);
   fCOD_92->SetParError(15,0);
   fCOD_92->SetParLimits(15,0,0);
   fCOD_92->SetParameter(16,0);
   fCOD_92->SetParError(16,0);
   fCOD_92->SetParLimits(16,0,0);
   fCOD_92->SetParameter(17,0);
   fCOD_92->SetParError(17,0);
   fCOD_92->SetParLimits(17,0,0);
   fCOD_92->SetParameter(18,0);
   fCOD_92->SetParError(18,0);
   fCOD_92->SetParLimits(18,0,0);
   fCOD_92->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
