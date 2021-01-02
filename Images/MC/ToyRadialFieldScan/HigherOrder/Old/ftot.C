void ftot()
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
   
   TF1 *ftot4 = new TF1("ftot",";x;y",0,6.283185, TF1::EAddToList::kDefault);
   ftot4->SetFillColor(19);
   ftot4->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   ftot4->SetLineColor(ci);
   ftot4->SetLineWidth(3);
   ftot4->GetXaxis()->SetTitle("x");
   ftot4->GetXaxis()->CenterTitle(true);
   ftot4->GetXaxis()->SetLabelFont(42);
   ftot4->GetXaxis()->SetTitleSize(0.04);
   ftot4->GetXaxis()->SetTitleOffset(1.1);
   ftot4->GetXaxis()->SetTitleFont(42);
   ftot4->GetYaxis()->SetTitle("y");
   ftot4->GetYaxis()->CenterTitle(true);
   ftot4->GetYaxis()->SetNdivisions(4000510);
   ftot4->GetYaxis()->SetLabelFont(42);
   ftot4->GetYaxis()->SetTitleSize(0.04);
   ftot4->GetYaxis()->SetTitleOffset(1.1);
   ftot4->GetYaxis()->SetTitleFont(42);
   ftot4->SetParameter(0,1e-06);
   ftot4->SetParError(0,0);
   ftot4->SetParLimits(0,0,0);
   ftot4->SetParameter(1,0.0001666667);
   ftot4->SetParError(1,0);
   ftot4->SetParLimits(1,0,0);
   ftot4->SetParameter(2,-1.570796);
   ftot4->SetParError(2,0);
   ftot4->SetParLimits(2,0,0);
   ftot4->SetParameter(3,0.0003333333);
   ftot4->SetParError(3,0);
   ftot4->SetParLimits(3,0,0);
   ftot4->SetParameter(4,-0.7853982);
   ftot4->SetParError(4,0);
   ftot4->SetParLimits(4,0,0);
   ftot4->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
