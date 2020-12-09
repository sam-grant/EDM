void FieldFitCheck_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.44559,45,53.33329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[2] = {
   -30,
   30};
   Double_t Graph0_fy1047[2] = {
   -20.58876,
   37.47646};
   Double_t Graph0_fex1047[2] = {
   0,
   0};
   Double_t Graph0_fey1047[2] = {
   0.8936814,
   0.8936814};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","150 sub-runs",100,-36,36);
   Graph_Graph01047->SetMinimum(-27.4677);
   Graph_Graph01047->SetMaximum(44.3554);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   
   TF1 *checkFit1048 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1048->SetFillColor(19);
   checkFit1048->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1048->SetLineColor(ci);
   checkFit1048->SetLineWidth(2);
   checkFit1048->SetChisquare(1.599188e-16);
   checkFit1048->SetNDF(0);
   checkFit1048->GetXaxis()->SetLabelFont(42);
   checkFit1048->GetXaxis()->SetTitleOffset(1);
   checkFit1048->GetXaxis()->SetTitleFont(42);
   checkFit1048->GetYaxis()->SetLabelFont(42);
   checkFit1048->GetYaxis()->SetTitleFont(42);
   checkFit1048->SetParameter(0,8.443849);
   checkFit1048->SetParError(0,0.6319282);
   checkFit1048->SetParLimits(0,0,0);
   checkFit1048->SetParameter(1,0.9677537);
   checkFit1048->SetParError(1,0.02106427);
   checkFit1048->SetParLimits(1,0,0);
   checkFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1048);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.968#pm0.0211");
   pt_LaTex = pt->AddText(" 8.44#pm0.632");
   pt_LaTex = pt->AddText(" 8.73#pm 0.68");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.725205,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.725205,-27.4677,-8.725205,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1049 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1049->SetFillColor(19);
   checkFit1049->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1049->SetLineColor(ci);
   checkFit1049->SetLineWidth(2);
   checkFit1049->SetChisquare(1.599188e-16);
   checkFit1049->SetNDF(0);
   checkFit1049->GetXaxis()->SetLabelFont(42);
   checkFit1049->GetXaxis()->SetTitleOffset(1);
   checkFit1049->GetXaxis()->SetTitleFont(42);
   checkFit1049->GetYaxis()->SetLabelFont(42);
   checkFit1049->GetYaxis()->SetTitleFont(42);
   checkFit1049->SetParameter(0,8.443849);
   checkFit1049->SetParError(0,0.6319282);
   checkFit1049->SetParLimits(0,0,0);
   checkFit1049->SetParameter(1,0.9677537);
   checkFit1049->SetParError(1,0.02106427);
   checkFit1049->SetParLimits(1,0,0);
   checkFit1049->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("150 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
