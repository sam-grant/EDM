void FieldFit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 26 22:07:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-73.63025,75,70.89813);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1020[6] = {
   45.90869,
   26.1237,
   8.621947,
   -11.5167,
   -29.92103,
   -47.95486};
   Double_t Graph0_fex1020[6] = {
   0,
   0,
   0,
   6.953119e-310,
   6.953119e-310,
   2.238105e-314};
   Double_t Graph0_fey1020[6] = {
   0.9013766,
   0.7428259,
   0.8596216,
   0.7572234,
   0.7602397,
   1.587331};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","",100,-60,60);
   Graph_Graph01020->SetMinimum(-59.17741);
   Graph_Graph01020->SetMaximum(56.44529);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   
   TF1 *mainFit1021 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1021->SetFillColor(19);
   mainFit1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1021->SetLineColor(ci);
   mainFit1021->SetLineWidth(2);
   mainFit1021->SetChisquare(2.251431);
   mainFit1021->SetNDF(4);
   mainFit1021->GetXaxis()->SetLabelFont(42);
   mainFit1021->GetXaxis()->SetTitleOffset(1);
   mainFit1021->GetXaxis()->SetTitleFont(42);
   mainFit1021->GetYaxis()->SetLabelFont(42);
   mainFit1021->GetYaxis()->SetTitleFont(42);
   mainFit1021->SetParameter(0,-1.609993);
   mainFit1021->SetParError(0,0.3523798);
   mainFit1021->SetParLimits(0,0,0);
   mainFit1021->SetParameter(1,0.9425671);
   mainFit1021->SetParError(1,0.01164743);
   mainFit1021->SetParLimits(1,0,0);
   mainFit1021->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1021);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.563");
   pt_LaTex = pt->AddText("0.943#pm0.0116");
   pt_LaTex = pt->AddText("#minus1.61#pm0.352");
   pt_LaTex = pt->AddText("#minus1.71#pm0.371");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,1.708094,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.708094,-59.17741,1.708094,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1022 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1022->SetFillColor(19);
   mainFit1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1022->SetLineColor(ci);
   mainFit1022->SetLineWidth(2);
   mainFit1022->SetChisquare(2.251431);
   mainFit1022->SetNDF(4);
   mainFit1022->GetXaxis()->SetLabelFont(42);
   mainFit1022->GetXaxis()->SetTitleOffset(1);
   mainFit1022->GetXaxis()->SetTitleFont(42);
   mainFit1022->GetYaxis()->SetLabelFont(42);
   mainFit1022->GetYaxis()->SetTitleFont(42);
   mainFit1022->SetParameter(0,-1.609993);
   mainFit1022->SetParError(0,0.3523798);
   mainFit1022->SetParLimits(0,0,0);
   mainFit1022->SetParameter(1,0.9425671);
   mainFit1022->SetParError(1,0.01164743);
   mainFit1022->SetParLimits(1,0,0);
   mainFit1022->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
