void FieldFit_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:31 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3613841,75,0.2910999);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1189[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1189[6] = {
   0.18045,
   0.09401221,
   0.005526864,
   -0.08074742,
   -0.1609676,
   -0.2507342};
   Double_t Graph0_fex1189[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1189[6] = {
   0.001902549,
   0.001902602,
   0.001902582,
   0.001902593,
   0.001902564,
   0.001902594};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1189,Graph0_fy1189,Graph0_fex1189,Graph0_fey1189);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01189 = new TH1F("Graph_Graph01189","Sub-runs 300",100,-60,60);
   Graph_Graph01189->SetMinimum(-0.2961357);
   Graph_Graph01189->SetMaximum(0.2258515);
   Graph_Graph01189->SetDirectory(0);
   Graph_Graph01189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01189->SetLineColor(ci);
   Graph_Graph01189->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01189->GetXaxis()->CenterTitle(true);
   Graph_Graph01189->GetXaxis()->SetLabelFont(42);
   Graph_Graph01189->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01189->GetXaxis()->SetTitleFont(42);
   Graph_Graph01189->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01189->GetYaxis()->CenterTitle(true);
   Graph_Graph01189->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01189->GetYaxis()->SetLabelFont(42);
   Graph_Graph01189->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01189->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01189->GetYaxis()->SetTitleFont(42);
   Graph_Graph01189->GetZaxis()->SetLabelFont(42);
   Graph_Graph01189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01189);
   
   
   TF1 *mainFit1190 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1190->SetFillColor(19);
   mainFit1190->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1190->SetLineColor(ci);
   mainFit1190->SetLineWidth(2);
   mainFit1190->SetChisquare(6.20922);
   mainFit1190->SetNDF(4);
   mainFit1190->GetXaxis()->SetLabelFont(42);
   mainFit1190->GetXaxis()->SetTitleOffset(1);
   mainFit1190->GetXaxis()->SetTitleFont(42);
   mainFit1190->GetYaxis()->SetLabelFont(42);
   mainFit1190->GetYaxis()->SetTitleFont(42);
   mainFit1190->SetParameter(0,-0.03541);
   mainFit1190->SetParError(0,0.0007767252);
   mainFit1190->SetParLimits(0,0,0);
   mainFit1190->SetParameter(1,-0.004295906);
   mainFit1190->SetParError(1,2.274012e-05);
   mainFit1190->SetParLimits(1,0,0);
   mainFit1190->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1190);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.55");
   pt_LaTex = pt->AddText("#minus0.0043#pm2.27e-05");
   pt_LaTex = pt->AddText("#minus0.0354#pm0.000777");
   pt_LaTex = pt->AddText("#minus8.24#pm0.186");
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
   TLine *line = new TLine(-60,0,-8.242731,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.242731,-0.2961357,-8.242731,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1191 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1191->SetFillColor(19);
   mainFit1191->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1191->SetLineColor(ci);
   mainFit1191->SetLineWidth(2);
   mainFit1191->SetChisquare(6.20922);
   mainFit1191->SetNDF(4);
   mainFit1191->GetXaxis()->SetLabelFont(42);
   mainFit1191->GetXaxis()->SetTitleOffset(1);
   mainFit1191->GetXaxis()->SetTitleFont(42);
   mainFit1191->GetYaxis()->SetLabelFont(42);
   mainFit1191->GetYaxis()->SetTitleFont(42);
   mainFit1191->SetParameter(0,-0.03541);
   mainFit1191->SetParError(0,0.0007767252);
   mainFit1191->SetParLimits(0,0,0);
   mainFit1191->SetParameter(1,-0.004295906);
   mainFit1191->SetParError(1,2.274012e-05);
   mainFit1191->SetParLimits(1,0,0);
   mainFit1191->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 300");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
