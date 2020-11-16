void f2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 11 20:11:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *f22 = new TF1("f2",";x;y",0,25, TF1::EAddToList::kDefault);
   f22->SetFillColor(19);
   f22->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   f22->SetLineColor(ci);
   f22->SetLineWidth(3);
   f22->GetXaxis()->SetTitle("x");
   f22->GetXaxis()->CenterTitle(true);
   f22->GetXaxis()->SetLabelFont(42);
   f22->GetXaxis()->SetTitleSize(0.04);
   f22->GetXaxis()->SetTitleOffset(1.1);
   f22->GetXaxis()->SetTitleFont(42);
   f22->GetYaxis()->SetTitle("y");
   f22->GetYaxis()->CenterTitle(true);
   f22->GetYaxis()->SetNdivisions(4000510);
   f22->GetYaxis()->SetLabelFont(42);
   f22->GetYaxis()->SetTitleSize(0.04);
   f22->GetYaxis()->SetTitleOffset(1.1);
   f22->GetYaxis()->SetTitleFont(42);
   f22->SetParameter(0,1);
   f22->SetParError(0,0);
   f22->SetParLimits(0,0,0);
   f22->SetParameter(1,0.1);
   f22->SetParError(1,0);
   f22->SetParLimits(1,0,0);
   f22->SetParameter(2,1);
   f22->SetParError(2,0);
   f22->SetParLimits(2,0,0);
   f22->SetParameter(3,1);
   f22->SetParError(3,0);
   f22->SetParLimits(3,0,0);
   f22->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
