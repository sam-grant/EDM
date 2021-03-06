void FieldFitCheck_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:55:31 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37.48395,45,51.04697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1071[4] = {
   -21.59771,
   -2.184723,
   17.38528,
   35.16074};
   Double_t Graph0_fex1071[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1071[4] = {
   1.13108,
   1.13108,
   1.13108,
   1.13108};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 150");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","Sub-runs 150",100,-36,36);
   Graph_Graph01071->SetMinimum(-28.63085);
   Graph_Graph01071->SetMaximum(42.19388);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
   
   TF1 *checkFit1072 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1072->SetFillColor(19);
   checkFit1072->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1072->SetLineColor(ci);
   checkFit1072->SetLineWidth(2);
   checkFit1072->SetChisquare(0.672854);
   checkFit1072->SetNDF(2);
   checkFit1072->GetXaxis()->SetLabelFont(42);
   checkFit1072->GetXaxis()->SetTitleOffset(1);
   checkFit1072->GetXaxis()->SetTitleFont(42);
   checkFit1072->GetYaxis()->SetLabelFont(42);
   checkFit1072->GetYaxis()->SetTitleFont(42);
   checkFit1072->SetParameter(0,7.190897);
   checkFit1072->SetParError(0,0.5655403);
   checkFit1072->SetParLimits(0,0,0);
   checkFit1072->SetParameter(1,0.9492268);
   checkFit1072->SetParError(1,0.02529173);
   checkFit1072->SetParLimits(1,0,0);
   checkFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1072);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.336");
   pt_LaTex = pt->AddText("0.949#pm0.0253");
   pt_LaTex = pt->AddText(" 7.19#pm0.566");
   pt_LaTex = pt->AddText("#minus7.58#pm0.629");
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
   TLine *line = new TLine(-36,0,-7.575531,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.575531,-28.63085,-7.575531,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1073 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1073->SetFillColor(19);
   checkFit1073->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1073->SetLineColor(ci);
   checkFit1073->SetLineWidth(2);
   checkFit1073->SetChisquare(0.672854);
   checkFit1073->SetNDF(2);
   checkFit1073->GetXaxis()->SetLabelFont(42);
   checkFit1073->GetXaxis()->SetTitleOffset(1);
   checkFit1073->GetXaxis()->SetTitleFont(42);
   checkFit1073->GetYaxis()->SetLabelFont(42);
   checkFit1073->GetYaxis()->SetTitleFont(42);
   checkFit1073->SetParameter(0,7.190897);
   checkFit1073->SetParError(0,0.5655403);
   checkFit1073->SetParLimits(0,0,0);
   checkFit1073->SetParameter(1,0.9492268);
   checkFit1073->SetParError(1,0.02529173);
   checkFit1073->SetParLimits(1,0,0);
   checkFit1073->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 150");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
