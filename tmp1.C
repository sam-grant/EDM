void tmp1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:49:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *1 = new TF1("","",43.2145,49.388, TF1::EAddToList::kDefault);
   1->SetNpx(10000);
   1->SetFillColor(19);
   1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   1->SetLineColor(ci);
   1->SetLineWidth(3);
   1->GetXaxis()->CenterTitle(true);
   1->GetXaxis()->SetLabelFont(42);
   1->GetXaxis()->SetTitleSize(0.04);
   1->GetXaxis()->SetTitleOffset(1.1);
   1->GetXaxis()->SetTitleFont(42);
   1->GetYaxis()->CenterTitle(true);
   1->GetYaxis()->SetNdivisions(4000510);
   1->GetYaxis()->SetLabelFont(42);
   1->GetYaxis()->SetTitleSize(0.04);
   1->GetYaxis()->SetTitleOffset(1.1);
   1->GetYaxis()->SetTitleFont(42);
   1->SetParameter(0,0);
   1->SetParError(0,0);
   1->SetParLimits(0,0,0);
   1->SetParameter(1,1.017767);
   1->SetParError(1,0);
   1->SetParLimits(1,0,0);
   1->SetParameter(2,1);
   1->SetParError(2,0);
   1->SetParLimits(2,0,0);
   1->SetParameter(3,0);
   1->SetParError(3,0);
   1->SetParLimits(3,0,0);
   1->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
