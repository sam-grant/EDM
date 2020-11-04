void FieldFitCheck_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:07 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-71.77884,75,90.21085);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[2] = {
   -50,
   50};
   Double_t Graph0_fy1055[2] = {
   -43.11452,
   61.54654};
   Double_t Graph0_fex1055[2] = {
   0,
   0};
   Double_t Graph0_fey1055[2] = {
   1.666033,
   1.666033};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","Sub-runs 175",100,-60,60);
   Graph_Graph01055->SetMinimum(-55.57987);
   Graph_Graph01055->SetMaximum(74.01188);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
   
   TF1 *checkFit1056 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1056->SetFillColor(19);
   checkFit1056->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1056->SetLineColor(ci);
   checkFit1056->SetLineWidth(2);
   checkFit1056->SetChisquare(5.414088e-16);
   checkFit1056->SetNDF(0);
   checkFit1056->GetXaxis()->SetLabelFont(42);
   checkFit1056->GetXaxis()->SetTitleOffset(1);
   checkFit1056->GetXaxis()->SetTitleFont(42);
   checkFit1056->GetYaxis()->SetLabelFont(42);
   checkFit1056->GetYaxis()->SetTitleFont(42);
   checkFit1056->SetParameter(0,9.216007);
   checkFit1056->SetParError(0,1.178063);
   checkFit1056->SetParLimits(0,0,0);
   checkFit1056->SetParameter(1,1.046611);
   checkFit1056->SetParError(1,0.02356127);
   checkFit1056->SetParLimits(1,0,0);
   checkFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1056);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText(" 1.05#pm0.0236");
   pt_LaTex = pt->AddText(" 9.22#pm 1.18");
   pt_LaTex = pt->AddText("#minus8.81#pm 1.14");
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
   TLine *line = new TLine(-60,0,-8.805574,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.805574,-55.57987,-8.805574,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1057 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1057->SetFillColor(19);
   checkFit1057->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1057->SetLineColor(ci);
   checkFit1057->SetLineWidth(2);
   checkFit1057->SetChisquare(5.414088e-16);
   checkFit1057->SetNDF(0);
   checkFit1057->GetXaxis()->SetLabelFont(42);
   checkFit1057->GetXaxis()->SetTitleOffset(1);
   checkFit1057->GetXaxis()->SetTitleFont(42);
   checkFit1057->GetYaxis()->SetLabelFont(42);
   checkFit1057->GetYaxis()->SetTitleFont(42);
   checkFit1057->SetParameter(0,9.216007);
   checkFit1057->SetParError(0,1.178063);
   checkFit1057->SetParLimits(0,0,0);
   checkFit1057->SetParameter(1,1.046611);
   checkFit1057->SetParError(1,0.02356127);
   checkFit1057->SetParLimits(1,0,0);
   checkFit1057->Draw("same");
   
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
