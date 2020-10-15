void FieldFit_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3225641,75,0.265082);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1309[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1309[11] = {
   0.1641328,
   0.1208662,
   0.08115759,
   0.03999005,
   0.007953941,
   -0.02604559,
   -0.07055715,
   -0.1054526,
   -0.1462753,
   -0.1791677,
   -0.2216148};
   Double_t Graph0_fex1309[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1309[11] = {
   0.003008157,
   0.003008313,
   0.003008331,
   0.003008266,
   0.003008262,
   0.003008275,
   0.003008252,
   0.003008263,
   0.003008334,
   0.003008262,
   0.003008265};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1309,Graph0_fy1309,Graph0_fex1309,Graph0_fey1309);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01309 = new TH1F("Graph_Graph01309","Sub-runs 300",100,-60,60);
   Graph_Graph01309->SetMinimum(-0.2637995);
   Graph_Graph01309->SetMaximum(0.2063174);
   Graph_Graph01309->SetDirectory(0);
   Graph_Graph01309->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01309->SetLineColor(ci);
   Graph_Graph01309->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01309->GetXaxis()->CenterTitle(true);
   Graph_Graph01309->GetXaxis()->SetLabelFont(42);
   Graph_Graph01309->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01309->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01309->GetXaxis()->SetTitleFont(42);
   Graph_Graph01309->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01309->GetYaxis()->CenterTitle(true);
   Graph_Graph01309->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01309->GetYaxis()->SetLabelFont(42);
   Graph_Graph01309->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01309->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01309->GetYaxis()->SetTitleFont(42);
   Graph_Graph01309->GetZaxis()->SetLabelFont(42);
   Graph_Graph01309->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01309->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01309);
   
   
   TF1 *mainFit1310 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1310->SetFillColor(19);
   mainFit1310->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1310->SetLineColor(ci);
   mainFit1310->SetLineWidth(2);
   mainFit1310->SetChisquare(10.89137);
   mainFit1310->SetNDF(9);
   mainFit1310->GetXaxis()->SetLabelFont(42);
   mainFit1310->GetXaxis()->SetTitleOffset(1);
   mainFit1310->GetXaxis()->SetTitleFont(42);
   mainFit1310->GetYaxis()->SetLabelFont(42);
   mainFit1310->GetYaxis()->SetTitleFont(42);
   mainFit1310->SetParameter(0,-0.03045565);
   mainFit1310->SetParError(0,0.0009070278);
   mainFit1310->SetParLimits(0,0,0);
   mainFit1310->SetParameter(1,-0.003800519);
   mainFit1310->SetParError(1,2.868261e-05);
   mainFit1310->SetParLimits(1,0,0);
   mainFit1310->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1310);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.21");
   pt_LaTex = pt->AddText("#minus0.0038#pm2.87e-05");
   pt_LaTex = pt->AddText("#minus0.0305#pm0.000907");
   pt_LaTex = pt->AddText("#minus8.01#pm0.246");
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
   TLine *line = new TLine(-60,0,-8.013551,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.013551,-0.2637995,-8.013551,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1311 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1311->SetFillColor(19);
   mainFit1311->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1311->SetLineColor(ci);
   mainFit1311->SetLineWidth(2);
   mainFit1311->SetChisquare(10.89137);
   mainFit1311->SetNDF(9);
   mainFit1311->GetXaxis()->SetLabelFont(42);
   mainFit1311->GetXaxis()->SetTitleOffset(1);
   mainFit1311->GetXaxis()->SetTitleFont(42);
   mainFit1311->GetYaxis()->SetLabelFont(42);
   mainFit1311->GetYaxis()->SetTitleFont(42);
   mainFit1311->SetParameter(0,-0.03045565);
   mainFit1311->SetParError(0,0.0009070278);
   mainFit1311->SetParLimits(0,0,0);
   mainFit1311->SetParameter(1,-0.003800519);
   mainFit1311->SetParError(1,2.868261e-05);
   mainFit1311->SetParLimits(1,0,0);
   mainFit1311->Draw("same");
   
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
