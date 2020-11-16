void FieldFit_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 15:13:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-81.58746,75,100.3821);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1061[6] = {
   -50.33207,
   -25.98194,
   -2.649545,
   21.97958,
   46.21831,
   69.12665};
   Double_t Graph0_fex1061[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1061[6] = {
   0.9271322,
   0.9267593,
   0.927162,
   0.9271582,
   0.9271647,
   0.9271627};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","100 sub-runs",100,-60,60);
   Graph_Graph01061->SetMinimum(-63.39051);
   Graph_Graph01061->SetMaximum(82.18512);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
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
   mainFit1062->SetChisquare(1.005659);
   mainFit1062->SetNDF(4);
   mainFit1062->GetXaxis()->SetLabelFont(42);
   mainFit1062->GetXaxis()->SetTitleOffset(1);
   mainFit1062->GetXaxis()->SetTitleFont(42);
   mainFit1062->GetYaxis()->SetLabelFont(42);
   mainFit1062->GetYaxis()->SetTitleFont(42);
   mainFit1062->SetParameter(0,9.726862);
   mainFit1062->SetParError(0,0.3784828);
   mainFit1062->SetParLimits(0,0,0);
   mainFit1062->SetParameter(1,1.19789);
   mainFit1062->SetParError(1,0.01108097);
   mainFit1062->SetParLimits(1,0,0);
   mainFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1062);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.251");
   pt_LaTex = pt->AddText("  1.2#pm0.0111");
   pt_LaTex = pt->AddText(" 9.73#pm0.378");
   pt_LaTex = pt->AddText(" 8.12#pm0.325");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.119997,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.119997,-63.39051,-8.119997,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1063 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1063->SetFillColor(19);
   mainFit1063->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1063->SetLineColor(ci);
   mainFit1063->SetLineWidth(2);
   mainFit1063->SetChisquare(1.005659);
   mainFit1063->SetNDF(4);
   mainFit1063->GetXaxis()->SetLabelFont(42);
   mainFit1063->GetXaxis()->SetTitleOffset(1);
   mainFit1063->GetXaxis()->SetTitleFont(42);
   mainFit1063->GetYaxis()->SetLabelFont(42);
   mainFit1063->GetYaxis()->SetTitleFont(42);
   mainFit1063->SetParameter(0,9.726862);
   mainFit1063->SetParError(0,0.3784828);
   mainFit1063->SetParLimits(0,0,0);
   mainFit1063->SetParameter(1,1.19789);
   mainFit1063->SetParError(1,0.01108097);
   mainFit1063->SetParLimits(1,0,0);
   mainFit1063->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("100 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
