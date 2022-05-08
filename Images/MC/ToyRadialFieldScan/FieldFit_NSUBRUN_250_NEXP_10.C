void FieldFit_NSUBRUN_250_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.65282,75,100.6137);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1157[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1157[6] = {
   -49.27508,
   -26.93431,
   -2.399602,
   19.15637,
   45.08802,
   69.78987};
   Double_t Graph0_fex1157[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1157[6] = {
   1.166656,
   0.6128599,
   0.6126853,
   0.6543475,
   0.6126862,
   0.6127279};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1157,Graph0_fy1157,Graph0_fex1157,Graph0_fey1157);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01157 = new TH1F("Graph_Graph01157","",100,-60,60);
   Graph_Graph01157->SetMinimum(-62.52617);
   Graph_Graph01157->SetMaximum(82.48703);
   Graph_Graph01157->SetDirectory(0);
   Graph_Graph01157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01157->SetLineColor(ci);
   Graph_Graph01157->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01157->GetXaxis()->CenterTitle(true);
   Graph_Graph01157->GetXaxis()->SetLabelFont(42);
   Graph_Graph01157->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01157->GetXaxis()->SetTitleFont(42);
   Graph_Graph01157->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01157->GetYaxis()->CenterTitle(true);
   Graph_Graph01157->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01157->GetYaxis()->SetLabelFont(42);
   Graph_Graph01157->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01157->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01157->GetYaxis()->SetTitleFont(42);
   Graph_Graph01157->GetZaxis()->SetLabelFont(42);
   Graph_Graph01157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01157);
   
   
   TF1 *mainFit1158 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1158->SetFillColor(19);
   mainFit1158->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1158->SetLineColor(ci);
   mainFit1158->SetLineWidth(2);
   mainFit1158->SetChisquare(12.65521);
   mainFit1158->SetNDF(4);
   mainFit1158->GetXaxis()->SetLabelFont(42);
   mainFit1158->GetXaxis()->SetTitleOffset(1);
   mainFit1158->GetXaxis()->SetTitleFont(42);
   mainFit1158->GetYaxis()->SetLabelFont(42);
   mainFit1158->GetYaxis()->SetTitleFont(42);
   mainFit1158->SetParameter(0,9.09);
   mainFit1158->SetParError(0,0.2763515);
   mainFit1158->SetParLimits(0,0,0);
   mainFit1158->SetParameter(1,1.198272);
   mainFit1158->SetParError(1,0.008718295);
   mainFit1158->SetParLimits(1,0,0);
   mainFit1158->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1158);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 3.16");
   pt_LaTex = pt->AddText("1.2
#pm0.009
");
   pt_LaTex = pt->AddText("9.09
#pm0.3
");
   pt_LaTex = pt->AddText("7.6
#pm0.2
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
   TLine *line = new TLine(-60,0,-7.585922,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.585922,-62.52617,-7.585922,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1159 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1159->SetFillColor(19);
   mainFit1159->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1159->SetLineColor(ci);
   mainFit1159->SetLineWidth(2);
   mainFit1159->SetChisquare(12.65521);
   mainFit1159->SetNDF(4);
   mainFit1159->GetXaxis()->SetLabelFont(42);
   mainFit1159->GetXaxis()->SetTitleOffset(1);
   mainFit1159->GetXaxis()->SetTitleFont(42);
   mainFit1159->GetYaxis()->SetLabelFont(42);
   mainFit1159->GetYaxis()->SetTitleFont(42);
   mainFit1159->SetParameter(0,9.09);
   mainFit1159->SetParError(0,0.2763515);
   mainFit1159->SetParLimits(0,0,0);
   mainFit1159->SetParameter(1,1.198272);
   mainFit1159->SetParError(1,0.008718295);
   mainFit1159->SetParLimits(1,0,0);
   mainFit1159->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
