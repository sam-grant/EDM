void FieldFit_NSUBRUN_50_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-86.14974,75,100.7365);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1029[6] = {
   -52.38592,
   -26.50893,
   -3.240092,
   21.0778,
   46.51429,
   68.21318};
   Double_t Graph0_fex1029[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1029[6] = {
   2.616107,
   1.373849,
   1.373854,
   1.467193,
   1.373757,
   1.375617};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","",100,-60,60);
   Graph_Graph01029->SetMinimum(-67.46111);
   Graph_Graph01029->SetMaximum(82.04788);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
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
   
   
   TF1 *mainFit1030 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1030->SetFillColor(19);
   mainFit1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1030->SetLineColor(ci);
   mainFit1030->SetLineWidth(2);
   mainFit1030->SetChisquare(1.929283);
   mainFit1030->SetNDF(4);
   mainFit1030->GetXaxis()->SetLabelFont(42);
   mainFit1030->GetXaxis()->SetTitleOffset(1);
   mainFit1030->GetXaxis()->SetTitleFont(42);
   mainFit1030->GetYaxis()->SetLabelFont(42);
   mainFit1030->GetYaxis()->SetTitleFont(42);
   mainFit1030->SetParameter(0,9.116906);
   mainFit1030->SetParError(0,0.6196808);
   mainFit1030->SetParLimits(0,0,0);
   mainFit1030->SetParameter(1,1.201853);
   mainFit1030->SetParError(1,0.01955677);
   mainFit1030->SetParLimits(1,0,0);
   mainFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1030);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.482");
   pt_LaTex = pt->AddText("1.2
#pm0.02
");
   pt_LaTex = pt->AddText("9.12
#pm0.6
");
   pt_LaTex = pt->AddText("7.6
#pm0.6
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
   TLine *line = new TLine(-60,0,-7.585708,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.585708,-67.46111,-7.585708,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1031 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1031->SetFillColor(19);
   mainFit1031->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1031->SetLineColor(ci);
   mainFit1031->SetLineWidth(2);
   mainFit1031->SetChisquare(1.929283);
   mainFit1031->SetNDF(4);
   mainFit1031->GetXaxis()->SetLabelFont(42);
   mainFit1031->GetXaxis()->SetTitleOffset(1);
   mainFit1031->GetXaxis()->SetTitleFont(42);
   mainFit1031->GetYaxis()->SetLabelFont(42);
   mainFit1031->GetYaxis()->SetTitleFont(42);
   mainFit1031->SetParameter(0,9.116906);
   mainFit1031->SetParError(0,0.6196808);
   mainFit1031->SetParLimits(0,0,0);
   mainFit1031->SetParameter(1,1.201853);
   mainFit1031->SetParError(1,0.01955677);
   mainFit1031->SetParLimits(1,0,0);
   mainFit1031->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
