void FieldFit_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:35 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3198858,75,0.2666418);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1153[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1153[11] = {
   0.1646278,
   0.1304806,
   0.07695251,
   0.03649675,
   0.003134188,
   -0.02220896,
   -0.07498909,
   -0.1033404,
   -0.1471543,
   -0.1773586,
   -0.2178717};
   Double_t Graph0_fex1153[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1153[11] = {
   0.004259455,
   0.004259755,
   0.004259624,
   0.00425948,
   0.004259525,
   0.00425954,
   0.004259539,
   0.004259531,
   0.004259595,
   0.004259521,
   0.004259529};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1153,Graph0_fy1153,Graph0_fex1153,Graph0_fey1153);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 150");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01153 = new TH1F("Graph_Graph01153","Sub-runs 150",100,-60,60);
   Graph_Graph01153->SetMinimum(-0.2612331);
   Graph_Graph01153->SetMaximum(0.2079891);
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
   
   
   TF1 *mainFit1154 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1154->SetFillColor(19);
   mainFit1154->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1154->SetLineColor(ci);
   mainFit1154->SetLineWidth(2);
   mainFit1154->SetChisquare(22.55107);
   mainFit1154->SetNDF(9);
   mainFit1154->GetXaxis()->SetLabelFont(42);
   mainFit1154->GetXaxis()->SetTitleOffset(1);
   mainFit1154->GetXaxis()->SetTitleFont(42);
   mainFit1154->GetYaxis()->SetLabelFont(42);
   mainFit1154->GetYaxis()->SetTitleFont(42);
   mainFit1154->SetParameter(0,-0.03011199);
   mainFit1154->SetParError(0,0.001284304);
   mainFit1154->SetParLimits(0,0,0);
   mainFit1154->SetParameter(1,-0.003794518);
   mainFit1154->SetParError(1,4.061327e-05);
   mainFit1154->SetParLimits(1,0,0);
   mainFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1154);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.51");
   pt_LaTex = pt->AddText("#minus0.00379#pm4.06e-05");
   pt_LaTex = pt->AddText("#minus0.0301#pm0.00128");
   pt_LaTex = pt->AddText("#minus7.94#pm0.349");
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
   TLine *line = new TLine(-60,0,-7.935658,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.935658,-0.2612331,-7.935658,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1155 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1155->SetFillColor(19);
   mainFit1155->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1155->SetLineColor(ci);
   mainFit1155->SetLineWidth(2);
   mainFit1155->SetChisquare(22.55107);
   mainFit1155->SetNDF(9);
   mainFit1155->GetXaxis()->SetLabelFont(42);
   mainFit1155->GetXaxis()->SetTitleOffset(1);
   mainFit1155->GetXaxis()->SetTitleFont(42);
   mainFit1155->GetYaxis()->SetLabelFont(42);
   mainFit1155->GetYaxis()->SetTitleFont(42);
   mainFit1155->SetParameter(0,-0.03011199);
   mainFit1155->SetParError(0,0.001284304);
   mainFit1155->SetParLimits(0,0,0);
   mainFit1155->SetParameter(1,-0.003794518);
   mainFit1155->SetParError(1,4.061327e-05);
   mainFit1155->SetParLimits(1,0,0);
   mainFit1155->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 150");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
