void FieldFit_NSUBRUN_75_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 24 16:05:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-77.98953,75,97.55251);
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
   -46.59972,
   -27.1406,
   -2.476168,
   21.51693,
   46.41683,
   67.17554};
   Double_t Graph0_fex1045[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1045[6] = {
   2.132798,
   1.119749,
   1.119902,
   1.196044,
   1.119954,
   1.11997};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","",100,-60,60);
   Graph_Graph01045->SetMinimum(-60.43532);
   Graph_Graph01045->SetMaximum(79.99831);
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
   Graph_Graph01045->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
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
   
   
   TF1 *mainFit1046 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1046->SetFillColor(19);
   mainFit1046->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1046->SetLineColor(ci);
   mainFit1046->SetLineWidth(2);
   mainFit1046->SetChisquare(6.305085);
   mainFit1046->SetNDF(4);
   mainFit1046->GetXaxis()->SetLabelFont(42);
   mainFit1046->GetXaxis()->SetTitleOffset(1);
   mainFit1046->GetXaxis()->SetTitleFont(42);
   mainFit1046->GetYaxis()->SetLabelFont(42);
   mainFit1046->GetYaxis()->SetTitleFont(42);
   mainFit1046->SetParameter(0,9.479434);
   mainFit1046->SetParError(0,0.5050782);
   mainFit1046->SetParLimits(0,0,0);
   mainFit1046->SetParameter(1,1.176313);
   mainFit1046->SetParError(1,0.01593441);
   mainFit1046->SetParLimits(1,0,0);
   mainFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1046);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.58");
   pt_LaTex = pt->AddText("1.18
#pm0.02
");
   pt_LaTex = pt->AddText("9.48
#pm0.5
");
   pt_LaTex = pt->AddText("8.1
#pm0.5
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.058598,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.058598,-60.43532,-8.058598,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1047 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1047->SetFillColor(19);
   mainFit1047->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1047->SetLineColor(ci);
   mainFit1047->SetLineWidth(2);
   mainFit1047->SetChisquare(6.305085);
   mainFit1047->SetNDF(4);
   mainFit1047->GetXaxis()->SetLabelFont(42);
   mainFit1047->GetXaxis()->SetTitleOffset(1);
   mainFit1047->GetXaxis()->SetTitleFont(42);
   mainFit1047->GetYaxis()->SetLabelFont(42);
   mainFit1047->GetYaxis()->SetTitleFont(42);
   mainFit1047->SetParameter(0,9.479434);
   mainFit1047->SetParError(0,0.5050782);
   mainFit1047->SetParLimits(0,0,0);
   mainFit1047->SetParameter(1,1.176313);
   mainFit1047->SetParError(1,0.01593441);
   mainFit1047->SetParLimits(1,0,0);
   mainFit1047->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
