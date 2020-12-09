void FieldFitCheck_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.48652,45,55.9637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[2] = {
   -30,
   30};
   Double_t Graph0_fy1023[2] = {
   -22.31574,
   38.79292};
   Double_t Graph0_fex1023[2] = {
   0,
   0};
   Double_t Graph0_fey1023[2] = {
   1.262413,
   1.262413};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","75 sub-runs",100,-36,36);
   Graph_Graph01023->SetMinimum(-29.9415);
   Graph_Graph01023->SetMaximum(46.41868);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
   
   TF1 *checkFit1024 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1024->SetFillColor(19);
   checkFit1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1024->SetLineColor(ci);
   checkFit1024->SetLineWidth(2);
   checkFit1024->SetChisquare(1.404646e-16);
   checkFit1024->SetNDF(0);
   checkFit1024->GetXaxis()->SetLabelFont(42);
   checkFit1024->GetXaxis()->SetTitleOffset(1);
   checkFit1024->GetXaxis()->SetTitleFont(42);
   checkFit1024->GetYaxis()->SetLabelFont(42);
   checkFit1024->GetYaxis()->SetTitleFont(42);
   checkFit1024->SetParameter(0,8.23859);
   checkFit1024->SetParError(0,0.892661);
   checkFit1024->SetParLimits(0,0,0);
   checkFit1024->SetParameter(1,1.018478);
   checkFit1024->SetParError(1,0.02975537);
   checkFit1024->SetParLimits(1,0,0);
   checkFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1024);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText(" 1.02#pm0.0298");
   pt_LaTex = pt->AddText(" 8.24#pm0.893");
   pt_LaTex = pt->AddText(" 8.09#pm0.908");
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
   TLine *line = new TLine(-36,0,-8.089123,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.089123,-29.9415,-8.089123,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1025 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1025->SetFillColor(19);
   checkFit1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1025->SetLineColor(ci);
   checkFit1025->SetLineWidth(2);
   checkFit1025->SetChisquare(1.404646e-16);
   checkFit1025->SetNDF(0);
   checkFit1025->GetXaxis()->SetLabelFont(42);
   checkFit1025->GetXaxis()->SetTitleOffset(1);
   checkFit1025->GetXaxis()->SetTitleFont(42);
   checkFit1025->GetYaxis()->SetLabelFont(42);
   checkFit1025->GetYaxis()->SetTitleFont(42);
   checkFit1025->SetParameter(0,8.23859);
   checkFit1025->SetParError(0,0.892661);
   checkFit1025->SetParLimits(0,0,0);
   checkFit1025->SetParameter(1,1.018478);
   checkFit1025->SetParError(1,0.02975537);
   checkFit1025->SetParLimits(1,0,0);
   checkFit1025->Draw("same");
   
   pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("75 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
