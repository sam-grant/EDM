void FieldFit_NSUBRUN_250_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 24 16:05:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-84.69239,75,101.5849);
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
   -52.47977,
   -26.19635,
   -3.246114,
   21.80195,
   46.48018,
   69.92601};
   Double_t Graph0_fex1157[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1157[6] = {
   1.166403,
   0.6127147,
   0.6126817,
   0.6542651,
   0.6126546,
   0.6126804};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1157,Graph0_fy1157,Graph0_fex1157,Graph0_fey1157);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01157 = new TH1F("Graph_Graph01157","",100,-60,60);
   Graph_Graph01157->SetMinimum(-66.06466);
   Graph_Graph01157->SetMaximum(82.95718);
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
   mainFit1158->SetChisquare(4.640789);
   mainFit1158->SetNDF(4);
   mainFit1158->GetXaxis()->SetLabelFont(42);
   mainFit1158->GetXaxis()->SetTitleOffset(1);
   mainFit1158->GetXaxis()->SetTitleFont(42);
   mainFit1158->GetYaxis()->SetLabelFont(42);
   mainFit1158->GetYaxis()->SetTitleFont(42);
   mainFit1158->SetParameter(0,9.530194);
   mainFit1158->SetParError(0,0.2763166);
   mainFit1158->SetParLimits(0,0,0);
   mainFit1158->SetParameter(1,1.215059);
   mainFit1158->SetParError(1,0.008717079);
   mainFit1158->SetParLimits(1,0,0);
   mainFit1158->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1158);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.16");
   pt_LaTex = pt->AddText("1.22
#pm0.009
");
   pt_LaTex = pt->AddText("9.53
#pm0.3
");
   pt_LaTex = pt->AddText("7.8
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
   TLine *line = new TLine(-60,0,-7.843403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.843403,-66.06466,-7.843403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1159 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1159->SetFillColor(19);
   mainFit1159->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1159->SetLineColor(ci);
   mainFit1159->SetLineWidth(2);
   mainFit1159->SetChisquare(4.640789);
   mainFit1159->SetNDF(4);
   mainFit1159->GetXaxis()->SetLabelFont(42);
   mainFit1159->GetXaxis()->SetTitleOffset(1);
   mainFit1159->GetXaxis()->SetTitleFont(42);
   mainFit1159->GetYaxis()->SetLabelFont(42);
   mainFit1159->GetYaxis()->SetTitleFont(42);
   mainFit1159->SetParameter(0,9.530194);
   mainFit1159->SetParError(0,0.2763166);
   mainFit1159->SetParLimits(0,0,0);
   mainFit1159->SetParameter(1,1.215059);
   mainFit1159->SetParError(1,0.008717079);
   mainFit1159->SetParLimits(1,0,0);
   mainFit1159->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
