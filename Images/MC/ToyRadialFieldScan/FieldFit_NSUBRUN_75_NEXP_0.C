void FieldFit_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 18 14:06:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.84956,75,102.681);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1045[6] = {
   -49.19495,
   -27.11495,
   -1.999324,
   22.14661,
   44.91679,
   71.02615};
   Double_t Graph0_fex1045[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1045[6] = {
   1.066189,
   1.065931,
   1.066066,
   1.066049,
   1.066084,
   1.066388};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","75 sub-runs",100,-60,60);
   Graph_Graph01045->SetMinimum(-62.4965);
   Graph_Graph01045->SetMaximum(84.3279);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
   
   TF1 *mainFit1046 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1046->SetFillColor(19);
   mainFit1046->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1046->SetLineColor(ci);
   mainFit1046->SetLineWidth(2);
   mainFit1046->SetChisquare(3.611577);
   mainFit1046->SetNDF(4);
   mainFit1046->GetXaxis()->SetLabelFont(42);
   mainFit1046->GetXaxis()->SetTitleOffset(1);
   mainFit1046->GetXaxis()->SetTitleFont(42);
   mainFit1046->GetYaxis()->SetLabelFont(42);
   mainFit1046->GetYaxis()->SetTitleFont(42);
   mainFit1046->SetParameter(0,9.963219);
   mainFit1046->SetParError(0,0.4352408);
   mainFit1046->SetParLimits(0,0,0);
   mainFit1046->SetParameter(1,1.201922);
   mainFit1046->SetParError(1,0.01274364);
   mainFit1046->SetParLimits(1,0,0);
   mainFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1046);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.903");
   pt_LaTex = pt->AddText("  1.2#pm0.0127");
   pt_LaTex = pt->AddText(" 9.96#pm0.435");
   pt_LaTex = pt->AddText(" 8.29#pm0.373");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.289403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.289403,-62.4965,-8.289403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1047 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1047->SetFillColor(19);
   mainFit1047->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1047->SetLineColor(ci);
   mainFit1047->SetLineWidth(2);
   mainFit1047->SetChisquare(3.611577);
   mainFit1047->SetNDF(4);
   mainFit1047->GetXaxis()->SetLabelFont(42);
   mainFit1047->GetXaxis()->SetTitleOffset(1);
   mainFit1047->GetXaxis()->SetTitleFont(42);
   mainFit1047->GetYaxis()->SetLabelFont(42);
   mainFit1047->GetYaxis()->SetTitleFont(42);
   mainFit1047->SetParameter(0,9.963219);
   mainFit1047->SetParError(0,0.4352408);
   mainFit1047->SetParLimits(0,0,0);
   mainFit1047->SetParameter(1,1.201922);
   mainFit1047->SetParError(1,0.01274364);
   mainFit1047->SetParLimits(1,0,0);
   mainFit1047->Draw("same");
   
   pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("75 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
