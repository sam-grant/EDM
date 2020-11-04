void FieldFitCheck_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.77679,45,56.51585);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1069[3] = {
   -22.68106,
   39.42011,
   8.7247};
   Double_t Graph0_fex1069[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1069[3] = {
   1.046961,
   1.046961,
   1.046961};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","Sub-runs 175",100,-36,36);
   Graph_Graph01069->SetMinimum(-30.14753);
   Graph_Graph01069->SetMaximum(46.88658);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
   
   TF1 *checkFit1070 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1070->SetFillColor(19);
   checkFit1070->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1070->SetLineColor(ci);
   checkFit1070->SetLineWidth(2);
   checkFit1070->SetChisquare(0.07672363);
   checkFit1070->SetNDF(1);
   checkFit1070->GetXaxis()->SetLabelFont(42);
   checkFit1070->GetXaxis()->SetTitleOffset(1);
   checkFit1070->GetXaxis()->SetTitleFont(42);
   checkFit1070->GetYaxis()->SetLabelFont(42);
   checkFit1070->GetYaxis()->SetTitleFont(42);
   checkFit1070->SetParameter(0,8.487918);
   checkFit1070->SetParError(0,0.6044631);
   checkFit1070->SetParLimits(0,0,0);
   checkFit1070->SetParameter(1,1.035019);
   checkFit1070->SetParError(1,0.0246771);
   checkFit1070->SetParLimits(1,0,0);
   checkFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1070);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0767");
   pt_LaTex = pt->AddText(" 1.04#pm0.0247");
   pt_LaTex = pt->AddText(" 8.49#pm0.604");
   pt_LaTex = pt->AddText(" #minus8.2#pm0.616");
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
   TLine *line = new TLine(-36,0,-8.200733,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.200733,-30.14753,-8.200733,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1071 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1071->SetFillColor(19);
   checkFit1071->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1071->SetLineColor(ci);
   checkFit1071->SetLineWidth(2);
   checkFit1071->SetChisquare(0.07672363);
   checkFit1071->SetNDF(1);
   checkFit1071->GetXaxis()->SetLabelFont(42);
   checkFit1071->GetXaxis()->SetTitleOffset(1);
   checkFit1071->GetXaxis()->SetTitleFont(42);
   checkFit1071->GetYaxis()->SetLabelFont(42);
   checkFit1071->GetYaxis()->SetTitleFont(42);
   checkFit1071->SetParameter(0,8.487918);
   checkFit1071->SetParError(0,0.6044631);
   checkFit1071->SetParLimits(0,0,0);
   checkFit1071->SetParameter(1,1.035019);
   checkFit1071->SetParError(1,0.0246771);
   checkFit1071->SetParLimits(1,0,0);
   checkFit1071->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 175");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
