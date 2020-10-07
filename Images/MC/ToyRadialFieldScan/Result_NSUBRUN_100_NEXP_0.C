void Result_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1217357,45,0.173892);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1039[4] = {
   0.1193702,
   0.05714857,
   0.001953266,
   -0.06721402};
   Double_t Graph0_fex1039[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1039[4] = {
   0.005250445,
   0.005250445,
   0.005250445,
   0.005250445};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 100");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","Sub-runs 100",100,-36,36);
   Graph_Graph01039->SetMinimum(-0.09217297);
   Graph_Graph01039->SetMaximum(0.1443292);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
   
   TF1 *fieldLineFit1040 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1040->SetFillColor(19);
   fieldLineFit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1040->SetLineColor(ci);
   fieldLineFit1040->SetLineWidth(2);
   fieldLineFit1040->SetChisquare(1.237229);
   fieldLineFit1040->SetNDF(2);
   fieldLineFit1040->GetXaxis()->SetLabelFont(42);
   fieldLineFit1040->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1040->GetXaxis()->SetTitleFont(42);
   fieldLineFit1040->GetYaxis()->SetLabelFont(42);
   fieldLineFit1040->GetYaxis()->SetTitleFont(42);
   fieldLineFit1040->SetParameter(0,0.02781451);
   fieldLineFit1040->SetParError(0,0.002625222);
   fieldLineFit1040->SetParLimits(0,0,0);
   fieldLineFit1040->SetParameter(1,-0.00307474);
   fieldLineFit1040->SetParError(1,0.0001174035);
   fieldLineFit1040->SetParLimits(1,0,0);
   fieldLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1040);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.619");
   pt_LaTex = pt->AddText("#minus0.00307#pm0.000117");
   pt_LaTex = pt->AddText("0.0278#pm0.00263");
   pt_LaTex = pt->AddText(" 9.05#pm0.921");
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
   TLine *line = new TLine(-36,0,9.046134,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(9.046134,-0.09217297,9.046134,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1041 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1041->SetFillColor(19);
   fieldLineFit1041->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1041->SetLineColor(ci);
   fieldLineFit1041->SetLineWidth(2);
   fieldLineFit1041->SetChisquare(1.237229);
   fieldLineFit1041->SetNDF(2);
   fieldLineFit1041->GetXaxis()->SetLabelFont(42);
   fieldLineFit1041->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1041->GetXaxis()->SetTitleFont(42);
   fieldLineFit1041->GetYaxis()->SetLabelFont(42);
   fieldLineFit1041->GetYaxis()->SetTitleFont(42);
   fieldLineFit1041->SetParameter(0,0.02781451);
   fieldLineFit1041->SetParError(0,0.002625222);
   fieldLineFit1041->SetParLimits(0,0,0);
   fieldLineFit1041->SetParameter(1,-0.00307474);
   fieldLineFit1041->SetParError(1,0.0001174035);
   fieldLineFit1041->SetParLimits(1,0,0);
   fieldLineFit1041->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 100");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
