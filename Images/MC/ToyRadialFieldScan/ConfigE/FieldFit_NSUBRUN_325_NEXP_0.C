void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2543708,45,0.1843352);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1153[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1153[4] = {
   0.1083273,
   0.008705026,
   -0.0925821,
   -0.1783629};
   Double_t Graph0_fex1153[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1153[4] = {
   0.002890256,
   0.002890267,
   0.002890261,
   0.002890274};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1153,Graph0_fy1153,Graph0_fex1153,Graph0_fey1153);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01153 = new TH1F("Graph_Graph01153","Sub-runs 325",100,-36,36);
   Graph_Graph01153->SetMinimum(-0.2105002);
   Graph_Graph01153->SetMaximum(0.1404646);
   Graph_Graph01153->SetDirectory(0);
   Graph_Graph01153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01153->SetLineColor(ci);
   Graph_Graph01153->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01153->GetXaxis()->CenterTitle(true);
   Graph_Graph01153->GetXaxis()->SetLabelFont(42);
   Graph_Graph01153->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01153->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01153->GetXaxis()->SetTitleFont(42);
   Graph_Graph01153->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01153->GetYaxis()->CenterTitle(true);
   Graph_Graph01153->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01153->GetYaxis()->SetLabelFont(42);
   Graph_Graph01153->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01153->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01153->GetYaxis()->SetTitleFont(42);
   Graph_Graph01153->GetZaxis()->SetLabelFont(42);
   Graph_Graph01153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01153);
   
   
   TF1 *mainFit1154 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1154->SetFillColor(19);
   mainFit1154->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1154->SetLineColor(ci);
   mainFit1154->SetLineWidth(2);
   mainFit1154->SetChisquare(7.498435);
   mainFit1154->SetNDF(2);
   mainFit1154->GetXaxis()->SetLabelFont(42);
   mainFit1154->GetXaxis()->SetTitleOffset(1);
   mainFit1154->GetXaxis()->SetTitleFont(42);
   mainFit1154->GetYaxis()->SetLabelFont(42);
   mainFit1154->GetYaxis()->SetTitleFont(42);
   mainFit1154->SetParameter(0,-0.03847778);
   mainFit1154->SetParError(0,0.001445132);
   mainFit1154->SetParLimits(0,0,0);
   mainFit1154->SetParameter(1,-0.004806782);
   mainFit1154->SetParError(1,6.462829e-05);
   mainFit1154->SetParLimits(1,0,0);
   mainFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1154);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 3.75");
   pt_LaTex = pt->AddText("#minus0.00481#pm6.46e-05");
   pt_LaTex = pt->AddText("#minus0.0385#pm0.00145");
   pt_LaTex = pt->AddText("    8#pm0.319");
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
   TLine *line = new TLine(-36,0,-8.004894,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.004894,-0.2105002,-8.004894,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1155 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1155->SetFillColor(19);
   mainFit1155->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1155->SetLineColor(ci);
   mainFit1155->SetLineWidth(2);
   mainFit1155->SetChisquare(7.498435);
   mainFit1155->SetNDF(2);
   mainFit1155->GetXaxis()->SetLabelFont(42);
   mainFit1155->GetXaxis()->SetTitleOffset(1);
   mainFit1155->GetXaxis()->SetTitleFont(42);
   mainFit1155->GetYaxis()->SetLabelFont(42);
   mainFit1155->GetYaxis()->SetTitleFont(42);
   mainFit1155->SetParameter(0,-0.03847778);
   mainFit1155->SetParError(0,0.001445132);
   mainFit1155->SetParLimits(0,0,0);
   mainFit1155->SetParameter(1,-0.004806782);
   mainFit1155->SetParError(1,6.462829e-05);
   mainFit1155->SetParLimits(1,0,0);
   mainFit1155->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 325");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
