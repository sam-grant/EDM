void FieldFitCheck_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.43378,45,54.80477);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[2] = {
   -30,
   30};
   Double_t Graph0_fy1063[2] = {
   -22.16952,
   37.54052};
   Double_t Graph0_fex1063[2] = {
   0,
   0};
   Double_t Graph0_fey1063[2] = {
   1.557829,
   1.557829};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 200");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","Sub-runs 200",100,-36,36);
   Graph_Graph01063->SetMinimum(-30.00992);
   Graph_Graph01063->SetMaximum(45.38092);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
   
   TF1 *checkFit1064 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1064->SetFillColor(19);
   checkFit1064->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1064->SetLineColor(ci);
   checkFit1064->SetLineWidth(2);
   checkFit1064->SetChisquare(6.605165e-16);
   checkFit1064->SetNDF(0);
   checkFit1064->GetXaxis()->SetLabelFont(42);
   checkFit1064->GetXaxis()->SetTitleOffset(1);
   checkFit1064->GetXaxis()->SetTitleFont(42);
   checkFit1064->GetYaxis()->SetLabelFont(42);
   checkFit1064->GetYaxis()->SetTitleFont(42);
   checkFit1064->SetParameter(0,7.685499);
   checkFit1064->SetParError(0,1.101552);
   checkFit1064->SetParLimits(0,0,0);
   checkFit1064->SetParameter(1,0.9951673);
   checkFit1064->SetParError(1,0.03671839);
   checkFit1064->SetParLimits(1,0,0);
   checkFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1064);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.995#pm0.0367");
   pt_LaTex = pt->AddText(" 7.69#pm  1.1");
   pt_LaTex = pt->AddText("#minus7.72#pm 1.14");
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
   TLine *line = new TLine(-36,0,-7.722821,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.722821,-30.00992,-7.722821,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1065 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1065->SetFillColor(19);
   checkFit1065->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1065->SetLineColor(ci);
   checkFit1065->SetLineWidth(2);
   checkFit1065->SetChisquare(6.605165e-16);
   checkFit1065->SetNDF(0);
   checkFit1065->GetXaxis()->SetLabelFont(42);
   checkFit1065->GetXaxis()->SetTitleOffset(1);
   checkFit1065->GetXaxis()->SetTitleFont(42);
   checkFit1065->GetYaxis()->SetLabelFont(42);
   checkFit1065->GetYaxis()->SetTitleFont(42);
   checkFit1065->SetParameter(0,7.685499);
   checkFit1065->SetParError(0,1.101552);
   checkFit1065->SetParLimits(0,0,0);
   checkFit1065->SetParameter(1,0.9951673);
   checkFit1065->SetParError(1,0.03671839);
   checkFit1065->SetParLimits(1,0,0);
   checkFit1065->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 200");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
