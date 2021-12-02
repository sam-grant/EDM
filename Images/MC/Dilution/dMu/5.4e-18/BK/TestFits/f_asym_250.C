void f_asym_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 25 15:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TF1 *fitAsym 1 = new TF1("fitAsym ","",0.2398377,0.8, TF1::EAddToList::kDefault);
   fitAsym 1->SetFillColor(19);
   fitAsym 1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fitAsym 1->SetLineColor(ci);
   fitAsym 1->SetLineWidth(3);
   fitAsym 1->GetXaxis()->CenterTitle(true);
   fitAsym 1->GetXaxis()->SetLabelFont(42);
   fitAsym 1->GetXaxis()->SetTitleSize(0.04);
   fitAsym 1->GetXaxis()->SetTitleOffset(1.1);
   fitAsym 1->GetXaxis()->SetTitleFont(42);
   fitAsym 1->GetYaxis()->CenterTitle(true);
   fitAsym 1->GetYaxis()->SetNdivisions(4000510);
   fitAsym 1->GetYaxis()->SetLabelFont(42);
   fitAsym 1->GetYaxis()->SetTitleSize(0.04);
   fitAsym 1->GetYaxis()->SetTitleOffset(1.1);
   fitAsym 1->GetYaxis()->SetTitleFont(42);
   fitAsym 1->SetParameter(0,2);
   fitAsym 1->SetParError(0,0);
   fitAsym 1->SetParLimits(0,0,0);
   fitAsym 1->SetParameter(1,4);
   fitAsym 1->SetParError(1,0);
   fitAsym 1->SetParLimits(1,0,0);
   fitAsym 1->SetParameter(2,5);
   fitAsym 1->SetParError(2,0);
   fitAsym 1->SetParLimits(2,0,0);
   fitAsym 1->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
