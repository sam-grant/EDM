void FieldFitCheck_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.64908,45,52.55132);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1047[4] = {
   -20.69009,
   -3.171129,
   16.56452,
   36.59233};
   Double_t Graph0_fex1047[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1047[4] = {
   1.092258,
   1.092258,
   1.092258,
   1.092258};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 100");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","Sub-runs 100",100,-36,36);
   Graph_Graph01047->SetMinimum(-27.72904);
   Graph_Graph01047->SetMaximum(43.63128);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
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
   checkFit1048->SetChisquare(1.474208);
   checkFit1048->SetNDF(2);
   checkFit1048->GetXaxis()->SetLabelFont(42);
   checkFit1048->GetXaxis()->SetTitleOffset(1);
   checkFit1048->GetXaxis()->SetTitleFont(42);
   checkFit1048->GetYaxis()->SetLabelFont(42);
   checkFit1048->GetYaxis()->SetTitleFont(42);
   checkFit1048->SetParameter(0,7.323909);
   checkFit1048->SetParError(0,0.5461292);
   checkFit1048->SetParLimits(0,0,0);
   checkFit1048->SetParameter(1,0.9579145);
   checkFit1048->SetParError(1,0.02442364);
   checkFit1048->SetParLimits(1,0,0);
   checkFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1048);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.737");
   pt_LaTex = pt->AddText("0.958#pm0.0244");
   pt_LaTex = pt->AddText(" 7.32#pm0.546");
   pt_LaTex = pt->AddText(" 7.65#pm0.603");
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
   TLine *line = new TLine(-36,0,-7.645682,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.645682,-27.72904,-7.645682,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1049 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1049->SetFillColor(19);
   checkFit1049->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1049->SetLineColor(ci);
   checkFit1049->SetLineWidth(2);
   checkFit1049->SetChisquare(1.474208);
   checkFit1049->SetNDF(2);
   checkFit1049->GetXaxis()->SetLabelFont(42);
   checkFit1049->GetXaxis()->SetTitleOffset(1);
   checkFit1049->GetXaxis()->SetTitleFont(42);
   checkFit1049->GetYaxis()->SetLabelFont(42);
   checkFit1049->GetYaxis()->SetTitleFont(42);
   checkFit1049->SetParameter(0,7.323909);
   checkFit1049->SetParError(0,0.5461292);
   checkFit1049->SetParLimits(0,0,0);
   checkFit1049->SetParameter(1,0.9579145);
   checkFit1049->SetParError(1,0.02442364);
   checkFit1049->SetParLimits(1,0,0);
   checkFit1049->Draw("same");
   
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
