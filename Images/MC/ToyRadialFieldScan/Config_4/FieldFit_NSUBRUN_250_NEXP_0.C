void FieldFit_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3213933,75,0.2562104);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1257[11] = {
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
   Double_t Graph0_fy1257[11] = {
   0.156647,
   0.1203063,
   0.08303363,
   0.04680182,
   0.004244087,
   -0.02765476,
   -0.06323128,
   -0.1080104,
   -0.1440748,
   -0.1824633,
   -0.2218299};
   Double_t Graph0_fex1257[11] = {
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
   Double_t Graph0_fey1257[11] = {
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1257,Graph0_fy1257,Graph0_fex1257,Graph0_fey1257);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01257 = new TH1F("Graph_Graph01257","Sub-runs 250",100,-60,60);
   Graph_Graph01257->SetMinimum(-0.2636329);
   Graph_Graph01257->SetMaximum(0.19845);
   Graph_Graph01257->SetDirectory(0);
   Graph_Graph01257->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01257->SetLineColor(ci);
   Graph_Graph01257->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01257->GetXaxis()->CenterTitle(true);
   Graph_Graph01257->GetXaxis()->SetLabelFont(42);
   Graph_Graph01257->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01257->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01257->GetXaxis()->SetTitleFont(42);
   Graph_Graph01257->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01257->GetYaxis()->CenterTitle(true);
   Graph_Graph01257->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01257->GetYaxis()->SetLabelFont(42);
   Graph_Graph01257->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01257->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01257->GetYaxis()->SetTitleFont(42);
   Graph_Graph01257->GetZaxis()->SetLabelFont(42);
   Graph_Graph01257->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01257->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01257);
   
   
   TF1 *mainFit1258 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1258->SetFillColor(19);
   mainFit1258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1258->SetLineColor(ci);
   mainFit1258->SetLineWidth(2);
   mainFit1258->SetChisquare(5.44295);
   mainFit1258->SetNDF(9);
   mainFit1258->GetXaxis()->SetLabelFont(42);
   mainFit1258->GetXaxis()->SetTitleOffset(1);
   mainFit1258->GetXaxis()->SetTitleFont(42);
   mainFit1258->GetYaxis()->SetLabelFont(42);
   mainFit1258->GetYaxis()->SetTitleFont(42);
   mainFit1258->SetParameter(0,-0.03056651);
   mainFit1258->SetParError(0,0.0009938114);
   mainFit1258->SetParLimits(0,0,0);
   mainFit1258->SetParameter(1,-0.003783534);
   mainFit1258->SetParError(1,3.142707e-05);
   mainFit1258->SetParLimits(1,0,0);
   mainFit1258->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1258);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.605");
   pt_LaTex = pt->AddText("#minus0.00378#pm3.14e-05");
   pt_LaTex = pt->AddText("#minus0.0306#pm0.000994");
   pt_LaTex = pt->AddText("#minus8.08#pm0.271");
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
   TLine *line = new TLine(-60,0,-8.078823,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.078823,-0.2636329,-8.078823,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1259 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1259->SetFillColor(19);
   mainFit1259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1259->SetLineColor(ci);
   mainFit1259->SetLineWidth(2);
   mainFit1259->SetChisquare(5.44295);
   mainFit1259->SetNDF(9);
   mainFit1259->GetXaxis()->SetLabelFont(42);
   mainFit1259->GetXaxis()->SetTitleOffset(1);
   mainFit1259->GetXaxis()->SetTitleFont(42);
   mainFit1259->GetYaxis()->SetLabelFont(42);
   mainFit1259->GetYaxis()->SetTitleFont(42);
   mainFit1259->SetParameter(0,-0.03056651);
   mainFit1259->SetParError(0,0.0009938114);
   mainFit1259->SetParLimits(0,0,0);
   mainFit1259->SetParameter(1,-0.003783534);
   mainFit1259->SetParError(1,3.142707e-05);
   mainFit1259->SetParLimits(1,0,0);
   mainFit1259->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 250");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
