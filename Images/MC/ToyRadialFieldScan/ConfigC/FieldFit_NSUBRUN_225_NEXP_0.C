void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:05 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3190561,75,0.262286);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1141[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1141[6] = {
   0.1619205,
   0.08181685,
   -0.0002885362,
   -0.06375018,
   -0.1524933,
   -0.2186905};
   Double_t Graph0_fex1141[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1141[6] = {
   0.003475159,
   0.003475052,
   0.003475047,
   0.003475059,
   0.003475048,
   0.003475287};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1141,Graph0_fy1141,Graph0_fex1141,Graph0_fey1141);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01141 = new TH1F("Graph_Graph01141","Sub-runs 225",100,-60,60);
   Graph_Graph01141->SetMinimum(-0.2609219);
   Graph_Graph01141->SetMaximum(0.2041518);
   Graph_Graph01141->SetDirectory(0);
   Graph_Graph01141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01141->SetLineColor(ci);
   Graph_Graph01141->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01141->GetXaxis()->CenterTitle(true);
   Graph_Graph01141->GetXaxis()->SetLabelFont(42);
   Graph_Graph01141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01141->GetXaxis()->SetTitleFont(42);
   Graph_Graph01141->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01141->GetYaxis()->CenterTitle(true);
   Graph_Graph01141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01141->GetYaxis()->SetLabelFont(42);
   Graph_Graph01141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01141->GetYaxis()->SetTitleFont(42);
   Graph_Graph01141->GetZaxis()->SetLabelFont(42);
   Graph_Graph01141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01141);
   
   
   TF1 *mainFit1142 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1142->SetFillColor(19);
   mainFit1142->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1142->SetLineColor(ci);
   mainFit1142->SetLineWidth(2);
   mainFit1142->SetChisquare(12.07388);
   mainFit1142->SetNDF(4);
   mainFit1142->GetXaxis()->SetLabelFont(42);
   mainFit1142->GetXaxis()->SetTitleOffset(1);
   mainFit1142->GetXaxis()->SetTitleFont(42);
   mainFit1142->GetYaxis()->SetLabelFont(42);
   mainFit1142->GetYaxis()->SetTitleFont(42);
   mainFit1142->SetParameter(0,-0.03191432);
   mainFit1142->SetParError(0,0.001418707);
   mainFit1142->SetParLimits(0,0,0);
   mainFit1142->SetParameter(1,-0.003813498);
   mainFit1142->SetParError(1,4.153627e-05);
   mainFit1142->SetParLimits(1,0,0);
   mainFit1142->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1142);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 3.02");
   pt_LaTex = pt->AddText("#minus0.00381#pm4.15e-05");
   pt_LaTex = pt->AddText("#minus0.0319#pm0.00142");
   pt_LaTex = pt->AddText("#minus8.37#pm0.383");
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
   TLine *line = new TLine(-60,0,-8.368778,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.368778,-0.2609219,-8.368778,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1143 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1143->SetFillColor(19);
   mainFit1143->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1143->SetLineColor(ci);
   mainFit1143->SetLineWidth(2);
   mainFit1143->SetChisquare(12.07388);
   mainFit1143->SetNDF(4);
   mainFit1143->GetXaxis()->SetLabelFont(42);
   mainFit1143->GetXaxis()->SetTitleOffset(1);
   mainFit1143->GetXaxis()->SetTitleFont(42);
   mainFit1143->GetYaxis()->SetLabelFont(42);
   mainFit1143->GetYaxis()->SetTitleFont(42);
   mainFit1143->SetParameter(0,-0.03191432);
   mainFit1143->SetParError(0,0.001418707);
   mainFit1143->SetParLimits(0,0,0);
   mainFit1143->SetParameter(1,-0.003813498);
   mainFit1143->SetParError(1,4.153627e-05);
   mainFit1143->SetParLimits(1,0,0);
   mainFit1143->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 225");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
