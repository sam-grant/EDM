void FieldFit_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:01 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3208271,75,0.2692761);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1093[6] = {
   0.1666662,
   0.07514689,
   0.006156403,
   -0.06775147,
   -0.1424668,
   -0.2182169};
   Double_t Graph0_fex1093[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1093[6] = {
   0.004259408,
   0.004259535,
   0.004259549,
   0.004259362,
   0.004259658,
   0.004259655};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 150");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","Sub-runs 150",100,-60,60);
   Graph_Graph01093->SetMinimum(-0.2618167);
   Graph_Graph01093->SetMaximum(0.2102658);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
   
   TF1 *mainFit1094 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1094->SetFillColor(19);
   mainFit1094->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1094->SetLineColor(ci);
   mainFit1094->SetLineWidth(2);
   mainFit1094->SetChisquare(7.201308);
   mainFit1094->SetNDF(4);
   mainFit1094->GetXaxis()->SetLabelFont(42);
   mainFit1094->GetXaxis()->SetTitleOffset(1);
   mainFit1094->GetXaxis()->SetTitleFont(42);
   mainFit1094->GetYaxis()->SetLabelFont(42);
   mainFit1094->GetYaxis()->SetTitleFont(42);
   mainFit1094->SetParameter(0,-0.03007755);
   mainFit1094->SetParError(0,0.001738945);
   mainFit1094->SetParLimits(0,0,0);
   mainFit1094->SetParameter(1,-0.003787381);
   mainFit1094->SetParError(1,5.091131e-05);
   mainFit1094->SetParLimits(1,0,0);
   mainFit1094->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1094);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  1.8");
   pt_LaTex = pt->AddText("#minus0.00379#pm5.09e-05");
   pt_LaTex = pt->AddText("#minus0.0301#pm0.00174");
   pt_LaTex = pt->AddText("#minus7.94#pm0.471");
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
   TLine *line = new TLine(-60,0,-7.941518,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.941518,-0.2618167,-7.941518,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1095 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1095->SetFillColor(19);
   mainFit1095->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1095->SetLineColor(ci);
   mainFit1095->SetLineWidth(2);
   mainFit1095->SetChisquare(7.201308);
   mainFit1095->SetNDF(4);
   mainFit1095->GetXaxis()->SetLabelFont(42);
   mainFit1095->GetXaxis()->SetTitleOffset(1);
   mainFit1095->GetXaxis()->SetTitleFont(42);
   mainFit1095->GetYaxis()->SetLabelFont(42);
   mainFit1095->GetYaxis()->SetTitleFont(42);
   mainFit1095->SetParameter(0,-0.03007755);
   mainFit1095->SetParError(0,0.001738945);
   mainFit1095->SetParLimits(0,0,0);
   mainFit1095->SetParameter(1,-0.003787381);
   mainFit1095->SetParError(1,5.091131e-05);
   mainFit1095->SetParLimits(1,0,0);
   mainFit1095->Draw("same");
   
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
