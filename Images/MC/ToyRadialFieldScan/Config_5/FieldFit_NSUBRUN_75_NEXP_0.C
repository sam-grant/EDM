void FieldFit_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3561546,75,0.2637766);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1075[11] = {
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
   Double_t Graph0_fy1075[11] = {
   0.1500256,
   0.1359782,
   0.07422975,
   0.05466207,
   0.02088696,
   -0.02218983,
   -0.07015065,
   -0.1268106,
   -0.1700975,
   -0.2088434,
   -0.2424037};
   Double_t Graph0_fex1075[11] = {
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
   Double_t Graph0_fey1075[11] = {
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908,
   0.01042908};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1075,Graph0_fy1075,Graph0_fex1075,Graph0_fey1075);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01075 = new TH1F("Graph_Graph01075","Sub-runs 75",100,-60,60);
   Graph_Graph01075->SetMinimum(-0.2941615);
   Graph_Graph01075->SetMaximum(0.2017835);
   Graph_Graph01075->SetDirectory(0);
   Graph_Graph01075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01075->SetLineColor(ci);
   Graph_Graph01075->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01075->GetXaxis()->CenterTitle(true);
   Graph_Graph01075->GetXaxis()->SetLabelFont(42);
   Graph_Graph01075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01075->GetXaxis()->SetTitleFont(42);
   Graph_Graph01075->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01075->GetYaxis()->CenterTitle(true);
   Graph_Graph01075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01075->GetYaxis()->SetLabelFont(42);
   Graph_Graph01075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01075->GetYaxis()->SetTitleFont(42);
   Graph_Graph01075->GetZaxis()->SetLabelFont(42);
   Graph_Graph01075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01075);
   
   
   TF1 *mainFit1076 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1076->SetFillColor(19);
   mainFit1076->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1076->SetLineColor(ci);
   mainFit1076->SetLineWidth(2);
   mainFit1076->SetChisquare(13.08133);
   mainFit1076->SetNDF(9);
   mainFit1076->GetXaxis()->SetLabelFont(42);
   mainFit1076->GetXaxis()->SetTitleOffset(1);
   mainFit1076->GetXaxis()->SetTitleFont(42);
   mainFit1076->GetYaxis()->SetLabelFont(42);
   mainFit1076->GetYaxis()->SetTitleFont(42);
   mainFit1076->SetParameter(0,-0.0367921);
   mainFit1076->SetParError(0,0.003144485);
   mainFit1076->SetParLimits(0,0,0);
   mainFit1076->SetParameter(1,-0.004116725);
   mainFit1076->SetParError(1,9.943735e-05);
   mainFit1076->SetParLimits(1,0,0);
   mainFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1076);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.45");
   pt_LaTex = pt->AddText("#minus0.00412#pm9.94e-05");
   pt_LaTex = pt->AddText("#minus0.0368#pm0.00314");
   pt_LaTex = pt->AddText("#minus8.94#pm0.794");
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
   TLine *line = new TLine(-60,0,-8.937224,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.937224,-0.2941615,-8.937224,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1077 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1077->SetFillColor(19);
   mainFit1077->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1077->SetLineColor(ci);
   mainFit1077->SetLineWidth(2);
   mainFit1077->SetChisquare(13.08133);
   mainFit1077->SetNDF(9);
   mainFit1077->GetXaxis()->SetLabelFont(42);
   mainFit1077->GetXaxis()->SetTitleOffset(1);
   mainFit1077->GetXaxis()->SetTitleFont(42);
   mainFit1077->GetYaxis()->SetLabelFont(42);
   mainFit1077->GetYaxis()->SetTitleFont(42);
   mainFit1077->SetParameter(0,-0.0367921);
   mainFit1077->SetParError(0,0.003144485);
   mainFit1077->SetParLimits(0,0,0);
   mainFit1077->SetParameter(1,-0.004116725);
   mainFit1077->SetParError(1,9.943735e-05);
   mainFit1077->SetParLimits(1,0,0);
   mainFit1077->Draw("same");
   
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
