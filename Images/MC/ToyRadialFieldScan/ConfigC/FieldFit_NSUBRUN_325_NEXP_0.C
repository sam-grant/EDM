void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3136877,75,0.2552137);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1205[6] = {
   0.1575066,
   0.08508328,
   0.008212314,
   -0.06752021,
   -0.1468192,
   -0.2159824};
   Double_t Graph0_fex1205[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1205[6] = {
   0.002890264,
   0.002890329,
   0.002890265,
   0.002890352,
   0.00289035,
   0.002888452};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","Sub-runs 325",100,-60,60);
   Graph_Graph01205->SetMinimum(-0.2567976);
   Graph_Graph01205->SetMaximum(0.1983236);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
   
   TF1 *mainFit1206 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1206->SetFillColor(19);
   mainFit1206->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1206->SetLineColor(ci);
   mainFit1206->SetLineWidth(2);
   mainFit1206->SetChisquare(3.035076);
   mainFit1206->SetNDF(4);
   mainFit1206->GetXaxis()->SetLabelFont(42);
   mainFit1206->GetXaxis()->SetTitleOffset(1);
   mainFit1206->GetXaxis()->SetTitleFont(42);
   mainFit1206->GetYaxis()->SetLabelFont(42);
   mainFit1206->GetYaxis()->SetTitleFont(42);
   mainFit1206->SetParameter(0,-0.02991942);
   mainFit1206->SetParError(0,0.001179838);
   mainFit1206->SetParLimits(0,0,0);
   mainFit1206->SetParameter(1,-0.003769812);
   mainFit1206->SetParError(1,3.453777e-05);
   mainFit1206->SetParLimits(1,0,0);
   mainFit1206->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1206);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.759");
   pt_LaTex = pt->AddText("#minus0.00377#pm3.45e-05");
   pt_LaTex = pt->AddText("#minus0.0299#pm0.00118");
   pt_LaTex = pt->AddText("#minus7.94#pm0.321");
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
   TLine *line = new TLine(-60,0,-7.93658,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.93658,-0.2567976,-7.93658,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1207 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1207->SetFillColor(19);
   mainFit1207->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1207->SetLineColor(ci);
   mainFit1207->SetLineWidth(2);
   mainFit1207->SetChisquare(3.035076);
   mainFit1207->SetNDF(4);
   mainFit1207->GetXaxis()->SetLabelFont(42);
   mainFit1207->GetXaxis()->SetTitleOffset(1);
   mainFit1207->GetXaxis()->SetTitleFont(42);
   mainFit1207->GetYaxis()->SetLabelFont(42);
   mainFit1207->GetYaxis()->SetTitleFont(42);
   mainFit1207->SetParameter(0,-0.02991942);
   mainFit1207->SetParError(0,0.001179838);
   mainFit1207->SetParLimits(0,0,0);
   mainFit1207->SetParameter(1,-0.003769812);
   mainFit1207->SetParError(1,3.453777e-05);
   mainFit1207->SetParLimits(1,0,0);
   mainFit1207->Draw("same");
   
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
