void tmp2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:49:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *2 = new TF1("","",30.55727,34.92259, TF1::EAddToList::kDefault);
   2->SetNpx(10000);
   2->SetFillColor(19);
   2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   2->SetLineColor(ci);
   2->SetLineWidth(3);
   2->GetXaxis()->CenterTitle(true);
   2->GetXaxis()->SetLabelFont(42);
   2->GetXaxis()->SetTitleSize(0.04);
   2->GetXaxis()->SetTitleOffset(1.1);
   2->GetXaxis()->SetTitleFont(42);
   2->GetYaxis()->CenterTitle(true);
   2->GetYaxis()->SetNdivisions(4000510);
   2->GetYaxis()->SetLabelFont(42);
   2->GetYaxis()->SetTitleSize(0.04);
   2->GetYaxis()->SetTitleOffset(1.1);
   2->GetYaxis()->SetTitleFont(42);
   2->SetParameter(0,0);
   2->SetParError(0,0);
   2->SetParLimits(0,0,0);
   2->SetParameter(1,1.43934);
   2->SetParError(1,0);
   2->SetParLimits(1,0,0);
   2->SetParameter(2,1);
   2->SetParError(2,0);
   2->SetParLimits(2,0,0);
   2->SetParameter(3,0);
   2->SetParError(3,0);
   2->SetParLimits(3,0,0);
   2->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
