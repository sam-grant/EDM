void FieldFit_NSUBRUN_100_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.87283,75,101.1818);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1061[6] = {
   -48.67568,
   -24.43854,
   -3.442393,
   22.75228,
   46.95214,
   69.86539};
   Double_t Graph0_fex1061[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1061[6] = {
   1.854709,
   0.9743313,
   0.9739894,
   1.040208,
   0.9738167,
   0.9739725};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","",100,-60,60);
   Graph_Graph01061->SetMinimum(-62.66736);
   Graph_Graph01061->SetMaximum(82.97634);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   
   TF1 *mainFit1062 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1062->SetFillColor(19);
   mainFit1062->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1062->SetLineColor(ci);
   mainFit1062->SetLineWidth(2);
   mainFit1062->SetChisquare(5.713437);
   mainFit1062->SetNDF(4);
   mainFit1062->GetXaxis()->SetLabelFont(42);
   mainFit1062->GetXaxis()->SetTitleOffset(1);
   mainFit1062->GetXaxis()->SetTitleFont(42);
   mainFit1062->GetYaxis()->SetLabelFont(42);
   mainFit1062->GetYaxis()->SetTitleFont(42);
   mainFit1062->SetParameter(0,10.42943);
   mainFit1062->SetParError(0,0.4393134);
   mainFit1062->SetParLimits(0,0,0);
   mainFit1062->SetParameter(1,1.192806);
   mainFit1062->SetParError(1,0.01385914);
   mainFit1062->SetParLimits(1,0,0);
   mainFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1062);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.43");
   pt_LaTex = pt->AddText("1.19
#pm0.01
");
   pt_LaTex = pt->AddText("10.4
#pm0.4
");
   pt_LaTex = pt->AddText("8.7
#pm0.4
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
   TLine *line = new TLine(-60,0,-8.743608,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.743608,-62.66736,-8.743608,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1063 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1063->SetFillColor(19);
   mainFit1063->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1063->SetLineColor(ci);
   mainFit1063->SetLineWidth(2);
   mainFit1063->SetChisquare(5.713437);
   mainFit1063->SetNDF(4);
   mainFit1063->GetXaxis()->SetLabelFont(42);
   mainFit1063->GetXaxis()->SetTitleOffset(1);
   mainFit1063->GetXaxis()->SetTitleFont(42);
   mainFit1063->GetYaxis()->SetLabelFont(42);
   mainFit1063->GetYaxis()->SetTitleFont(42);
   mainFit1063->SetParameter(0,10.42943);
   mainFit1063->SetParError(0,0.4393134);
   mainFit1063->SetParLimits(0,0,0);
   mainFit1063->SetParameter(1,1.192806);
   mainFit1063->SetParError(1,0.01385914);
   mainFit1063->SetParLimits(1,0,0);
   mainFit1063->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
