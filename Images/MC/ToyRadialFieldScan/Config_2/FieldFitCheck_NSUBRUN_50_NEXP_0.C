void FieldFitCheck_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:32:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-43.42777,45,61.89797);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1023[4] = {
   -22.77496,
   -0.05383111,
   13.30576,
   41.24516};
   Double_t Graph0_fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1023[4] = {
   3.098518,
   3.098518,
   3.098518,
   3.098518};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","Sub-runs 50",100,-36,36);
   Graph_Graph01023->SetMinimum(-32.89519);
   Graph_Graph01023->SetMaximum(51.36539);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
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
   checkFit1024->SetChisquare(3.694168);
   checkFit1024->SetNDF(2);
   checkFit1024->GetXaxis()->SetLabelFont(42);
   checkFit1024->GetXaxis()->SetTitleOffset(1);
   checkFit1024->GetXaxis()->SetTitleFont(42);
   checkFit1024->GetYaxis()->SetLabelFont(42);
   checkFit1024->GetYaxis()->SetTitleFont(42);
   checkFit1024->SetParameter(0,7.930531);
   checkFit1024->SetParError(0,1.549259);
   checkFit1024->SetParLimits(0,0,0);
   checkFit1024->SetParameter(1,1.0271);
   checkFit1024->SetParError(1,0.06928498);
   checkFit1024->SetParLimits(1,0,0);
   checkFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1024);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.85");
   pt_LaTex = pt->AddText(" 1.03#pm0.0693");
   pt_LaTex = pt->AddText(" 7.93#pm 1.55");
   pt_LaTex = pt->AddText("#minus7.72#pm  1.6");
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
   TLine *line = new TLine(-36,0,-7.721287,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.721287,-32.89519,-7.721287,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1025 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1025->SetFillColor(19);
   checkFit1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1025->SetLineColor(ci);
   checkFit1025->SetLineWidth(2);
   checkFit1025->SetChisquare(3.694168);
   checkFit1025->SetNDF(2);
   checkFit1025->GetXaxis()->SetLabelFont(42);
   checkFit1025->GetXaxis()->SetTitleOffset(1);
   checkFit1025->GetXaxis()->SetTitleFont(42);
   checkFit1025->GetYaxis()->SetLabelFont(42);
   checkFit1025->GetYaxis()->SetTitleFont(42);
   checkFit1025->SetParameter(0,7.930531);
   checkFit1025->SetParError(0,1.549259);
   checkFit1025->SetParLimits(0,0,0);
   checkFit1025->SetParameter(1,1.0271);
   checkFit1025->SetParError(1,0.06928498);
   checkFit1025->SetParLimits(1,0,0);
   checkFit1025->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
