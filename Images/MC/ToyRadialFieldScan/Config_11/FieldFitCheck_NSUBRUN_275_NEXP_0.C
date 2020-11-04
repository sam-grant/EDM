void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.84662,75,84.00713);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1087[2] = {
   -50,
   50};
   Double_t Graph0_fy1087[2] = {
   -41.70322,
   57.86372};
   Double_t Graph0_fex1087[2] = {
   0,
   0};
   Double_t Graph0_fey1087[2] = {
   0.8344447,
   0.8344447};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","Sub-runs 275",100,-60,60);
   Graph_Graph01087->SetMinimum(-52.66124);
   Graph_Graph01087->SetMaximum(68.82175);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01087->GetXaxis()->CenterTitle(true);
   Graph_Graph01087->GetXaxis()->SetLabelFont(42);
   Graph_Graph01087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01087->GetXaxis()->SetTitleFont(42);
   Graph_Graph01087->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01087->GetYaxis()->CenterTitle(true);
   Graph_Graph01087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01087->GetYaxis()->SetLabelFont(42);
   Graph_Graph01087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01087->GetYaxis()->SetTitleFont(42);
   Graph_Graph01087->GetZaxis()->SetLabelFont(42);
   Graph_Graph01087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01087);
   
   
   TF1 *checkFit1088 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1088->SetFillColor(19);
   checkFit1088->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1088->SetLineColor(ci);
   checkFit1088->SetLineWidth(2);
   checkFit1088->SetChisquare(2.520618e-16);
   checkFit1088->SetNDF(0);
   checkFit1088->GetXaxis()->SetLabelFont(42);
   checkFit1088->GetXaxis()->SetTitleOffset(1);
   checkFit1088->GetXaxis()->SetTitleFont(42);
   checkFit1088->GetYaxis()->SetLabelFont(42);
   checkFit1088->GetYaxis()->SetTitleFont(42);
   checkFit1088->SetParameter(0,8.080253);
   checkFit1088->SetParError(0,0.5900415);
   checkFit1088->SetParLimits(0,0,0);
   checkFit1088->SetParameter(1,0.9956694);
   checkFit1088->SetParError(1,0.01180083);
   checkFit1088->SetParLimits(1,0,0);
   checkFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1088);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.996#pm0.0118");
   pt_LaTex = pt->AddText(" 8.08#pm 0.59");
   pt_LaTex = pt->AddText("#minus8.12#pm  0.6");
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
   TLine *line = new TLine(-60,0,-8.115398,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.115398,-52.66124,-8.115398,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1089 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1089->SetFillColor(19);
   checkFit1089->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1089->SetLineColor(ci);
   checkFit1089->SetLineWidth(2);
   checkFit1089->SetChisquare(2.520618e-16);
   checkFit1089->SetNDF(0);
   checkFit1089->GetXaxis()->SetLabelFont(42);
   checkFit1089->GetXaxis()->SetTitleOffset(1);
   checkFit1089->GetXaxis()->SetTitleFont(42);
   checkFit1089->GetYaxis()->SetLabelFont(42);
   checkFit1089->GetYaxis()->SetTitleFont(42);
   checkFit1089->SetParameter(0,8.080253);
   checkFit1089->SetParError(0,0.5900415);
   checkFit1089->SetParLimits(0,0,0);
   checkFit1089->SetParameter(1,0.9956694);
   checkFit1089->SetParError(1,0.01180083);
   checkFit1089->SetParLimits(1,0,0);
   checkFit1089->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 275");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
