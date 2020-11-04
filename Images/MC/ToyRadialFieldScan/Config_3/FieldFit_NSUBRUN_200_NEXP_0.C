void FieldFit_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:11 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.316841,75,0.2580751);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[2] = {
   -50,
   50};
   Double_t Graph0_fy1061[2] = {
   0.1585691,
   -0.217335};
   Double_t Graph0_fex1061[2] = {
   0,
   0};
   Double_t Graph0_fey1061[2] = {
   0.003686683,
   0.003686682};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 200");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","Sub-runs 200",100,-60,60);
   Graph_Graph01061->SetMinimum(-0.2593494);
   Graph_Graph01061->SetMaximum(0.2005835);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   
   TF1 *mainFit1062 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1062->SetFillColor(19);
   mainFit1062->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1062->SetLineColor(ci);
   mainFit1062->SetLineWidth(2);
   mainFit1062->SetChisquare(5.178941e-12);
   mainFit1062->SetNDF(0);
   mainFit1062->GetXaxis()->SetLabelFont(42);
   mainFit1062->GetXaxis()->SetTitleOffset(1);
   mainFit1062->GetXaxis()->SetTitleFont(42);
   mainFit1062->GetYaxis()->SetLabelFont(42);
   mainFit1062->GetYaxis()->SetTitleFont(42);
   mainFit1062->SetParameter(0,-0.02938295);
   mainFit1062->SetParError(0,0.002606878);
   mainFit1062->SetParLimits(0,0,0);
   mainFit1062->SetParameter(1,-0.003759041);
   mainFit1062->SetParError(1,5.213756e-05);
   mainFit1062->SetParLimits(1,0,0);
   mainFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1062);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00376#pm5.21e-05");
   pt_LaTex = pt->AddText("#minus0.0294#pm0.00261");
   pt_LaTex = pt->AddText("#minus7.82#pm0.702");
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
   TLine *line = new TLine(-60,0,-7.816607,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.816607,-0.2593494,-7.816607,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1063 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1063->SetFillColor(19);
   mainFit1063->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1063->SetLineColor(ci);
   mainFit1063->SetLineWidth(2);
   mainFit1063->SetChisquare(5.178941e-12);
   mainFit1063->SetNDF(0);
   mainFit1063->GetXaxis()->SetLabelFont(42);
   mainFit1063->GetXaxis()->SetTitleOffset(1);
   mainFit1063->GetXaxis()->SetTitleFont(42);
   mainFit1063->GetYaxis()->SetLabelFont(42);
   mainFit1063->GetYaxis()->SetTitleFont(42);
   mainFit1063->SetParameter(0,-0.02938295);
   mainFit1063->SetParError(0,0.002606878);
   mainFit1063->SetParLimits(0,0,0);
   mainFit1063->SetParameter(1,-0.003759041);
   mainFit1063->SetParError(1,5.213756e-05);
   mainFit1063->SetParLimits(1,0,0);
   mainFit1063->Draw("same");
   
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
