void FieldFit_pValCheck2()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 18:48:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-62.35663,75,63.25412);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1029[5] = {
   40.84381,
   24.20023,
   -10.13141,
   -28.0841,
   -38.75655};
   Double_t Graph0_fex1029[5] = {
   0,
   0,
   6.953129e-310,
   6.953129e-310,
   2.134935e-314};
   Double_t Graph0_fey1029[5] = {
   1.475175,
   1.242858,
   1.26852,
   1.273873,
   2.664954};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","",100,-60,60);
   Graph_Graph01029->SetMinimum(-49.79556);
   Graph_Graph01029->SetMaximum(50.69304);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   
   TF1 *mainFit1030 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1030->SetFillColor(19);
   mainFit1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1030->SetLineColor(ci);
   mainFit1030->SetLineWidth(2);
   mainFit1030->SetChisquare(4.546651);
   mainFit1030->SetNDF(3);
   mainFit1030->GetXaxis()->SetLabelFont(42);
   mainFit1030->GetXaxis()->SetTitleOffset(1);
   mainFit1030->GetXaxis()->SetTitleFont(42);
   mainFit1030->GetYaxis()->SetLabelFont(42);
   mainFit1030->GetYaxis()->SetTitleFont(42);
   mainFit1030->SetParameter(0,-1.455543);
   mainFit1030->SetParError(0,0.6397459);
   mainFit1030->SetParLimits(0,0,0);
   mainFit1030->SetParameter(1,0.8439881);
   mainFit1030->SetParError(1,0.01940907);
   mainFit1030->SetParLimits(1,0,0);
   mainFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1030);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.52");
   pt_LaTex = pt->AddText("0.844#pm0.0194");
   pt_LaTex = pt->AddText("#minus1.46#pm 0.64");
   pt_LaTex = pt->AddText("#minus1.72#pm0.754");
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
   TLine *line = new TLine(-60,0,1.724601,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.724601,-49.79556,1.724601,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1031 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1031->SetFillColor(19);
   mainFit1031->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1031->SetLineColor(ci);
   mainFit1031->SetLineWidth(2);
   mainFit1031->SetChisquare(4.546651);
   mainFit1031->SetNDF(3);
   mainFit1031->GetXaxis()->SetLabelFont(42);
   mainFit1031->GetXaxis()->SetTitleOffset(1);
   mainFit1031->GetXaxis()->SetTitleFont(42);
   mainFit1031->GetYaxis()->SetLabelFont(42);
   mainFit1031->GetYaxis()->SetTitleFont(42);
   mainFit1031->SetParameter(0,-1.455543);
   mainFit1031->SetParError(0,0.6397459);
   mainFit1031->SetParLimits(0,0,0);
   mainFit1031->SetParameter(1,0.8439881);
   mainFit1031->SetParError(1,0.01940907);
   mainFit1031->SetParLimits(1,0,0);
   mainFit1031->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
