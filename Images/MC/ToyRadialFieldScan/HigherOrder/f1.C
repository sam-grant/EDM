void f1()
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
   
   TF1 *f11 = new TF1("f1",";x;y",0,25, TF1::EAddToList::kDefault);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   f11->SetLineColor(ci);
   f11->SetLineWidth(3);
   f11->GetXaxis()->SetTitle("x");
   f11->GetXaxis()->CenterTitle(true);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetTitleSize(0.04);
   f11->GetXaxis()->SetTitleOffset(1.1);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetTitle("y");
   f11->GetYaxis()->CenterTitle(true);
   f11->GetYaxis()->SetNdivisions(4000510);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetTitleSize(0.04);
   f11->GetYaxis()->SetTitleOffset(1.1);
   f11->GetYaxis()->SetTitleFont(42);
   f11->SetParameter(0,1);
   f11->SetParError(0,0);
   f11->SetParLimits(0,0,0);
   f11->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
