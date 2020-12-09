void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37.156,45,53.15171);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[2] = {
   -30,
   30};
   Double_t Graph0_fy1039[2] = {
   -21.1246,
   37.12031};
   Double_t Graph0_fex1039[2] = {
   0,
   0};
   Double_t Graph0_fey1039[2] = {
   0.9801097,
   0.9801097};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","125 sub-runs",100,-36,36);
   Graph_Graph01039->SetMinimum(-28.12522);
   Graph_Graph01039->SetMaximum(44.12094);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
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
   
   
   TF1 *checkFit1040 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1040->SetFillColor(19);
   checkFit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1040->SetLineColor(ci);
   checkFit1040->SetLineWidth(2);
   checkFit1040->SetChisquare(7.821981e-17);
   checkFit1040->SetNDF(0);
   checkFit1040->GetXaxis()->SetLabelFont(42);
   checkFit1040->GetXaxis()->SetTitleOffset(1);
   checkFit1040->GetXaxis()->SetTitleFont(42);
   checkFit1040->GetYaxis()->SetLabelFont(42);
   checkFit1040->GetYaxis()->SetTitleFont(42);
   checkFit1040->SetParameter(0,7.997856);
   checkFit1040->SetParError(0,0.6930422);
   checkFit1040->SetParLimits(0,0,0);
   checkFit1040->SetParameter(1,0.9707486);
   checkFit1040->SetParError(1,0.02310141);
   checkFit1040->SetParLimits(1,0,0);
   checkFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1040);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.971#pm0.0231");
   pt_LaTex = pt->AddText("    8#pm0.693");
   pt_LaTex = pt->AddText(" 8.24#pm 0.74");
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
   TLine *line = new TLine(-36,0,-8.238854,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.238854,-28.12522,-8.238854,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1041 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1041->SetFillColor(19);
   checkFit1041->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1041->SetLineColor(ci);
   checkFit1041->SetLineWidth(2);
   checkFit1041->SetChisquare(7.821981e-17);
   checkFit1041->SetNDF(0);
   checkFit1041->GetXaxis()->SetLabelFont(42);
   checkFit1041->GetXaxis()->SetTitleOffset(1);
   checkFit1041->GetXaxis()->SetTitleFont(42);
   checkFit1041->GetYaxis()->SetLabelFont(42);
   checkFit1041->GetYaxis()->SetTitleFont(42);
   checkFit1041->SetParameter(0,7.997856);
   checkFit1041->SetParError(0,0.6930422);
   checkFit1041->SetParLimits(0,0,0);
   checkFit1041->SetParameter(1,0.9707486);
   checkFit1041->SetParError(1,0.02310141);
   checkFit1041->SetParLimits(1,0,0);
   checkFit1041->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("125 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
