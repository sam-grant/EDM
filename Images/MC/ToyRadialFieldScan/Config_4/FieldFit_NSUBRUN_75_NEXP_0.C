void FieldFit_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3043599,75,0.246506);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1039[5] = {
   0.1486983,
   0.06753336,
   -0.03458538,
   -0.1166201,
   -0.2065522};
   Double_t Graph0_fex1039[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1039[5] = {
   0.005996719,
   0.005996719,
   0.005996719,
   0.00599672,
   0.005996719};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","Sub-runs 75",100,-60,60);
   Graph_Graph01039->SetMinimum(-0.2492733);
   Graph_Graph01039->SetMaximum(0.1914194);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
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
   
   
   TF1 *mainFit1040 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1040->SetFillColor(19);
   mainFit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1040->SetLineColor(ci);
   mainFit1040->SetLineWidth(2);
   mainFit1040->SetChisquare(2.379366);
   mainFit1040->SetNDF(3);
   mainFit1040->GetXaxis()->SetLabelFont(42);
   mainFit1040->GetXaxis()->SetTitleOffset(1);
   mainFit1040->GetXaxis()->SetTitleFont(42);
   mainFit1040->GetYaxis()->SetLabelFont(42);
   mainFit1040->GetYaxis()->SetTitleFont(42);
   mainFit1040->SetParameter(0,-0.02830518);
   mainFit1040->SetParError(0,0.002681814);
   mainFit1040->SetParLimits(0,0,0);
   mainFit1040->SetParameter(1,-0.003578618);
   mainFit1040->SetParError(1,7.585317e-05);
   mainFit1040->SetParLimits(1,0,0);
   mainFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1040);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.793");
   pt_LaTex = pt->AddText("#minus0.00358#pm7.59e-05");
   pt_LaTex = pt->AddText("#minus0.0283#pm0.00268");
   pt_LaTex = pt->AddText("#minus7.91#pm0.768");
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
   TLine *line = new TLine(-60,0,-7.90953,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.90953,-0.2492733,-7.90953,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1041 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1041->SetFillColor(19);
   mainFit1041->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1041->SetLineColor(ci);
   mainFit1041->SetLineWidth(2);
   mainFit1041->SetChisquare(2.379366);
   mainFit1041->SetNDF(3);
   mainFit1041->GetXaxis()->SetLabelFont(42);
   mainFit1041->GetXaxis()->SetTitleOffset(1);
   mainFit1041->GetXaxis()->SetTitleFont(42);
   mainFit1041->GetYaxis()->SetLabelFont(42);
   mainFit1041->GetYaxis()->SetTitleFont(42);
   mainFit1041->SetParameter(0,-0.02830518);
   mainFit1041->SetParError(0,0.002681814);
   mainFit1041->SetParLimits(0,0,0);
   mainFit1041->SetParameter(1,-0.003578618);
   mainFit1041->SetParError(1,7.585317e-05);
   mainFit1041->SetParLimits(1,0,0);
   mainFit1041->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 75");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
