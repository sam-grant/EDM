void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.6627,45,55.1958);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1143[4] = {
   -23.19969,
   -1.693212,
   18.90821,
   38.7328};
   Double_t Graph0_fex1143[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1143[4] = {
   0.6532565,
   0.6532565,
   0.6532565,
   0.6532565};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","Sub-runs 300",100,-36,36);
   Graph_Graph01143->SetMinimum(-30.17684);
   Graph_Graph01143->SetMaximum(45.70995);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
   
   TF1 *checkFit1144 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1144->SetFillColor(19);
   checkFit1144->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1144->SetLineColor(ci);
   checkFit1144->SetLineWidth(2);
   checkFit1144->SetChisquare(1.659098);
   checkFit1144->SetNDF(2);
   checkFit1144->GetXaxis()->SetLabelFont(42);
   checkFit1144->GetXaxis()->SetTitleOffset(1);
   checkFit1144->GetXaxis()->SetTitleFont(42);
   checkFit1144->GetYaxis()->SetLabelFont(42);
   checkFit1144->GetYaxis()->SetTitleFont(42);
   checkFit1144->SetParameter(0,8.187026);
   checkFit1144->SetParError(0,0.3266283);
   checkFit1144->SetParLimits(0,0,0);
   checkFit1144->SetParameter(1,1.031994);
   checkFit1144->SetParError(1,0.01460726);
   checkFit1144->SetParLimits(1,0,0);
   checkFit1144->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1144);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.83");
   pt_LaTex = pt->AddText(" 1.03#pm0.0146");
   pt_LaTex = pt->AddText(" 8.19#pm0.327");
   pt_LaTex = pt->AddText("#minus7.93#pm0.336");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-7.933208,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.933208,-30.17684,-7.933208,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1145 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1145->SetFillColor(19);
   checkFit1145->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1145->SetLineColor(ci);
   checkFit1145->SetLineWidth(2);
   checkFit1145->SetChisquare(1.659098);
   checkFit1145->SetNDF(2);
   checkFit1145->GetXaxis()->SetLabelFont(42);
   checkFit1145->GetXaxis()->SetTitleOffset(1);
   checkFit1145->GetXaxis()->SetTitleFont(42);
   checkFit1145->GetYaxis()->SetLabelFont(42);
   checkFit1145->GetYaxis()->SetTitleFont(42);
   checkFit1145->SetParameter(0,8.187026);
   checkFit1145->SetParError(0,0.3266283);
   checkFit1145->SetParLimits(0,0,0);
   checkFit1145->SetParameter(1,1.031994);
   checkFit1145->SetParError(1,0.01460726);
   checkFit1145->SetParLimits(1,0,0);
   checkFit1145->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 300");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
