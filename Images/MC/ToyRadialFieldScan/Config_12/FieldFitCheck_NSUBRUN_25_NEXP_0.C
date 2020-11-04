void FieldFitCheck_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.0782,75,84.86689);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1013[5] = {
   -38.17699,
   -17.56853,
   4.598574,
   33.32694,
   56.96568};
   Double_t Graph0_fex1013[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1013[5] = {
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","Sub-runs 25",100,-60,60);
   Graph_Graph01013->SetMinimum(-50.98369);
   Graph_Graph01013->SetMaximum(69.77238);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   
   TF1 *checkFit1014 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1014->SetFillColor(19);
   checkFit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1014->SetLineColor(ci);
   checkFit1014->SetLineWidth(2);
   checkFit1014->SetChisquare(2.625083);
   checkFit1014->SetNDF(3);
   checkFit1014->GetXaxis()->SetLabelFont(42);
   checkFit1014->GetXaxis()->SetTitleOffset(1);
   checkFit1014->GetXaxis()->SetTitleFont(42);
   checkFit1014->GetYaxis()->SetLabelFont(42);
   checkFit1014->GetYaxis()->SetTitleFont(42);
   checkFit1014->SetParameter(0,7.829134);
   checkFit1014->SetParError(0,1.227017);
   checkFit1014->SetParLimits(0,0,0);
   checkFit1014->SetParameter(1,0.9647233);
   checkFit1014->SetParError(1,0.03470527);
   checkFit1014->SetParLimits(1,0,0);
   checkFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.875");
   pt_LaTex = pt->AddText("0.965#pm0.0347");
   pt_LaTex = pt->AddText(" 7.83#pm 1.23");
   pt_LaTex = pt->AddText("#minus8.12#pm  1.3");
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
   TLine *line = new TLine(-60,0,-8.11542,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.11542,-50.98369,-8.11542,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1015 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1015->SetFillColor(19);
   checkFit1015->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1015->SetLineColor(ci);
   checkFit1015->SetLineWidth(2);
   checkFit1015->SetChisquare(2.625083);
   checkFit1015->SetNDF(3);
   checkFit1015->GetXaxis()->SetLabelFont(42);
   checkFit1015->GetXaxis()->SetTitleOffset(1);
   checkFit1015->GetXaxis()->SetTitleFont(42);
   checkFit1015->GetYaxis()->SetLabelFont(42);
   checkFit1015->GetYaxis()->SetTitleFont(42);
   checkFit1015->SetParameter(0,7.829134);
   checkFit1015->SetParError(0,1.227017);
   checkFit1015->SetParLimits(0,0,0);
   checkFit1015->SetParameter(1,0.9647233);
   checkFit1015->SetParError(1,0.03470527);
   checkFit1015->SetParLimits(1,0,0);
   checkFit1015->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
