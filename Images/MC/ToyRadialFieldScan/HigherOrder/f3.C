void f3()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 26 10:24:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *f33 = new TF1("f3",";x;y",0,6.283185, TF1::EAddToList::kDefault);
   f33->SetFillColor(19);
   f33->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   f33->SetLineColor(ci);
   f33->SetLineWidth(3);
   f33->GetXaxis()->SetTitle("x");
   f33->GetXaxis()->CenterTitle(true);
   f33->GetXaxis()->SetLabelFont(42);
   f33->GetXaxis()->SetTitleSize(0.04);
   f33->GetXaxis()->SetTitleOffset(1.1);
   f33->GetXaxis()->SetTitleFont(42);
   f33->GetYaxis()->SetTitle("y");
   f33->GetYaxis()->CenterTitle(true);
   f33->GetYaxis()->SetNdivisions(4000510);
   f33->GetYaxis()->SetLabelFont(42);
   f33->GetYaxis()->SetTitleSize(0.04);
   f33->GetYaxis()->SetTitleOffset(1.1);
   f33->GetYaxis()->SetTitleFont(42);
   f33->SetParameter(0,0.0003333333);
   f33->SetParError(0,0);
   f33->SetParLimits(0,0,0);
   f33->SetParameter(1,-0.7853982);
   f33->SetParError(1,0);
   f33->SetParLimits(1,0,0);
   f33->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
