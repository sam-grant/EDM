void fit()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 17:27:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *fit1 = new TF1("fit",";#lambda=p/p_{max};A_{EDM}/#sigma_{#theta_{y}}",0.1196111,0.6777324, TF1::EAddToList::kDefault);
   fit1->SetFillColor(19);
   fit1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fit1->SetLineColor(ci);
   fit1->SetLineWidth(3);
   fit1->SetChisquare(33.16851);
   fit1->SetNDF(11);
   fit1->GetXaxis()->SetTitle("#lambda=p/p_{max}");
   fit1->GetXaxis()->CenterTitle(true);
   fit1->GetXaxis()->SetLabelFont(42);
   fit1->GetXaxis()->SetTitleSize(0.04);
   fit1->GetXaxis()->SetTitleOffset(1.1);
   fit1->GetXaxis()->SetTitleFont(42);
   fit1->GetYaxis()->SetTitle("A_{EDM}/#sigma_{#theta_{y}}");
   fit1->GetYaxis()->CenterTitle(true);
   fit1->GetYaxis()->SetNdivisions(4000510);
   fit1->GetYaxis()->SetLabelFont(42);
   fit1->GetYaxis()->SetTitleSize(0.04);
   fit1->GetYaxis()->SetTitleOffset(1.1);
   fit1->GetYaxis()->SetTitleFont(42);
   fit1->SetParameter(0,0.9744795);
   fit1->SetParError(0,0.01775307);
   fit1->SetParLimits(0,0,0);
   fit1->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
