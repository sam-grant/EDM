void Result_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.121009,45,0.1723496);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1069[4] = {
   0.1195138,
   0.05168413,
   -0.007013372,
   -0.06817316};
   Double_t Graph0_fex1069[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1069[4] = {
   0.003942752,
   0.003942753,
   0.003942752,
   0.003942752};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","Sub-runs 175",100,-36,36);
   Graph_Graph01069->SetMinimum(-0.09167316);
   Graph_Graph01069->SetMaximum(0.1430138);
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
   Graph_Graph01069->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
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
   
   
   TF1 *fieldLineFit1070 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1070->SetFillColor(19);
   fieldLineFit1070->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1070->SetLineColor(ci);
   fieldLineFit1070->SetLineWidth(2);
   fieldLineFit1070->SetChisquare(1.147825);
   fieldLineFit1070->SetNDF(2);
   fieldLineFit1070->GetXaxis()->SetLabelFont(42);
   fieldLineFit1070->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1070->GetXaxis()->SetTitleFont(42);
   fieldLineFit1070->GetYaxis()->SetLabelFont(42);
   fieldLineFit1070->GetYaxis()->SetTitleFont(42);
   fieldLineFit1070->SetParameter(0,0.02400284);
   fieldLineFit1070->SetParError(0,0.001971376);
   fieldLineFit1070->SetParLimits(0,0,0);
   fieldLineFit1070->SetParameter(1,-0.003108792);
   fieldLineFit1070->SetParError(1,8.816262e-05);
   fieldLineFit1070->SetParLimits(1,0,0);
   fieldLineFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1070);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.574");
   pt_LaTex = pt->AddText("#minus0.00311#pm8.82e-05");
   pt_LaTex = pt->AddText("0.024#pm0.00197");
   pt_LaTex = pt->AddText(" 7.72#pm0.634");
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
   TLine *line = new TLine(-36,0,7.720956,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(7.720956,-0.09167316,7.720956,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1071 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1071->SetFillColor(19);
   fieldLineFit1071->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1071->SetLineColor(ci);
   fieldLineFit1071->SetLineWidth(2);
   fieldLineFit1071->SetChisquare(1.147825);
   fieldLineFit1071->SetNDF(2);
   fieldLineFit1071->GetXaxis()->SetLabelFont(42);
   fieldLineFit1071->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1071->GetXaxis()->SetTitleFont(42);
   fieldLineFit1071->GetYaxis()->SetLabelFont(42);
   fieldLineFit1071->GetYaxis()->SetTitleFont(42);
   fieldLineFit1071->SetParameter(0,0.02400284);
   fieldLineFit1071->SetParError(0,0.001971376);
   fieldLineFit1071->SetParLimits(0,0,0);
   fieldLineFit1071->SetParameter(1,-0.003108792);
   fieldLineFit1071->SetParError(1,8.816262e-05);
   fieldLineFit1071->SetParLimits(1,0,0);
   fieldLineFit1071->Draw("same");
   
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
