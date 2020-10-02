void Result_NSUBRUN_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:49:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1220388,45,0.1720388);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1237[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1237[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1237[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1237[4] = {
   0.004275888,
   0.004275888,
   0.004275888,
   0.004275888};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1237,Graph0_fy1237,Graph0_fex1237,Graph0_fey1237);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01237 = new TH1F("Graph_Graph01237","Sub-runs 175",100,-36,36);
   Graph_Graph01237->SetMinimum(-0.09263107);
   Graph_Graph01237->SetMaximum(0.1426311);
   Graph_Graph01237->SetDirectory(0);
   Graph_Graph01237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01237->SetLineColor(ci);
   Graph_Graph01237->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01237->GetXaxis()->CenterTitle(true);
   Graph_Graph01237->GetXaxis()->SetLabelFont(42);
   Graph_Graph01237->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01237->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01237->GetXaxis()->SetTitleFont(42);
   Graph_Graph01237->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01237->GetYaxis()->CenterTitle(true);
   Graph_Graph01237->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01237->GetYaxis()->SetLabelFont(42);
   Graph_Graph01237->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01237->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01237->GetYaxis()->SetTitleFont(42);
   Graph_Graph01237->GetZaxis()->SetLabelFont(42);
   Graph_Graph01237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01237);
   
   
   TF1 *lineFit21238 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21238->SetFillColor(19);
   lineFit21238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21238->SetLineColor(ci);
   lineFit21238->SetLineWidth(2);
   lineFit21238->SetChisquare(8.102688e-26);
   lineFit21238->SetNDF(2);
   lineFit21238->GetXaxis()->SetLabelFont(42);
   lineFit21238->GetXaxis()->SetTitleOffset(1);
   lineFit21238->GetXaxis()->SetTitleFont(42);
   lineFit21238->GetYaxis()->SetLabelFont(42);
   lineFit21238->GetYaxis()->SetTitleFont(42);
   lineFit21238->SetParameter(0,0.025);
   lineFit21238->SetParError(0,0.002137944);
   lineFit21238->SetParLimits(0,0,0);
   lineFit21238->SetParameter(1,-0.003125);
   lineFit21238->SetParError(1,9.561176e-05);
   lineFit21238->SetParLimits(1,0,0);
   lineFit21238->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21238);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("4.05#times10^{#minus26}");
   pt_LaTex = pt->AddText("#minus0.00312#pm9.56e-05");
   pt_LaTex = pt->AddText("0.025#pm0.00214");
   pt_LaTex = pt->AddText("    8#pm0.727");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,-0.09263107,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21239 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21239->SetFillColor(19);
   lineFit21239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21239->SetLineColor(ci);
   lineFit21239->SetLineWidth(2);
   lineFit21239->SetChisquare(8.102688e-26);
   lineFit21239->SetNDF(2);
   lineFit21239->GetXaxis()->SetLabelFont(42);
   lineFit21239->GetXaxis()->SetTitleOffset(1);
   lineFit21239->GetXaxis()->SetTitleFont(42);
   lineFit21239->GetYaxis()->SetLabelFont(42);
   lineFit21239->GetYaxis()->SetTitleFont(42);
   lineFit21239->SetParameter(0,0.025);
   lineFit21239->SetParError(0,0.002137944);
   lineFit21239->SetParLimits(0,0,0);
   lineFit21239->SetParameter(1,-0.003125);
   lineFit21239->SetParError(1,9.561176e-05);
   lineFit21239->SetParLimits(1,0,0);
   lineFit21239->Draw("same");
   
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
