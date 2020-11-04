void FieldFit_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3613197,75,0.2890084);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1125[6] = {
   0.1782887,
   0.09415454,
   0.006948692,
   -0.07841094,
   -0.1642737,
   -0.2506001};
   Double_t Graph0_fex1125[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1125[6] = {
   0.002331659,
   0.002331675,
   0.002331649,
   0.002331649,
   0.002331701,
   0.002331636};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 200");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","Sub-runs 200",100,-60,60);
   Graph_Graph01125->SetMinimum(-0.2962869);
   Graph_Graph01125->SetMaximum(0.2239756);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
   
   TF1 *mainFit1126 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1126->SetFillColor(19);
   mainFit1126->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1126->SetLineColor(ci);
   mainFit1126->SetLineWidth(2);
   mainFit1126->SetChisquare(0.3294818);
   mainFit1126->SetNDF(4);
   mainFit1126->GetXaxis()->SetLabelFont(42);
   mainFit1126->GetXaxis()->SetTitleOffset(1);
   mainFit1126->GetXaxis()->SetTitleFont(42);
   mainFit1126->GetYaxis()->SetLabelFont(42);
   mainFit1126->GetYaxis()->SetTitleFont(42);
   mainFit1126->SetParameter(0,-0.03564903);
   mainFit1126->SetParError(0,0.0009518968);
   mainFit1126->SetParLimits(0,0,0);
   mainFit1126->SetParameter(1,-0.004292985);
   mainFit1126->SetParError(1,2.786864e-05);
   mainFit1126->SetParLimits(1,0,0);
   mainFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1126);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0824");
   pt_LaTex = pt->AddText("#minus0.00429#pm2.79e-05");
   pt_LaTex = pt->AddText("#minus0.0356#pm0.000952");
   pt_LaTex = pt->AddText(" #minus8.3#pm0.228");
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
   TLine *line = new TLine(-60,0,-8.30402,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.30402,-0.2962869,-8.30402,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1127 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1127->SetFillColor(19);
   mainFit1127->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1127->SetLineColor(ci);
   mainFit1127->SetLineWidth(2);
   mainFit1127->SetChisquare(0.3294818);
   mainFit1127->SetNDF(4);
   mainFit1127->GetXaxis()->SetLabelFont(42);
   mainFit1127->GetXaxis()->SetTitleOffset(1);
   mainFit1127->GetXaxis()->SetTitleFont(42);
   mainFit1127->GetYaxis()->SetLabelFont(42);
   mainFit1127->GetYaxis()->SetTitleFont(42);
   mainFit1127->SetParameter(0,-0.03564903);
   mainFit1127->SetParError(0,0.0009518968);
   mainFit1127->SetParLimits(0,0,0);
   mainFit1127->SetParameter(1,-0.004292985);
   mainFit1127->SetParError(1,2.786864e-05);
   mainFit1127->SetParLimits(1,0,0);
   mainFit1127->Draw("same");
   
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
