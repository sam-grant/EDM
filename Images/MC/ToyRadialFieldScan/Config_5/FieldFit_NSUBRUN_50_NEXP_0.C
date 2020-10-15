void FieldFit_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:32 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3646227,75,0.3045778);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[11] = {
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
   Double_t Graph0_fy1049[11] = {
   0.1802917,
   0.1236526,
   0.073945,
   0.0588054,
   0.01978311,
   -0.03018489,
   -0.04603941,
   -0.1128884,
   -0.1667289,
   -0.206123,
   -0.2403365};
   Double_t Graph0_fex1049[11] = {
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
   Double_t Graph0_fey1049[11] = {
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","Sub-runs 50",100,-60,60);
   Graph_Graph01049->SetMinimum(-0.2977026);
   Graph_Graph01049->SetMaximum(0.2376578);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   
   TF1 *mainFit1050 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1050->SetFillColor(19);
   mainFit1050->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1050->SetLineColor(ci);
   mainFit1050->SetLineWidth(2);
   mainFit1050->SetChisquare(9.650408);
   mainFit1050->SetNDF(9);
   mainFit1050->GetXaxis()->SetLabelFont(42);
   mainFit1050->GetXaxis()->SetTitleOffset(1);
   mainFit1050->GetXaxis()->SetTitleFont(42);
   mainFit1050->GetYaxis()->SetLabelFont(42);
   mainFit1050->GetYaxis()->SetTitleFont(42);
   mainFit1050->SetParameter(0,-0.03143848);
   mainFit1050->SetParError(0,0.003845083);
   mainFit1050->SetParLimits(0,0,0);
   mainFit1050->SetParameter(1,-0.004139523);
   mainFit1050->SetParError(1,0.0001215922);
   mainFit1050->SetParLimits(1,0,0);
   mainFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1050);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.07");
   pt_LaTex = pt->AddText("#minus0.00414#pm0.000122");
   pt_LaTex = pt->AddText("#minus0.0314#pm0.00385");
   pt_LaTex = pt->AddText("#minus7.59#pm0.955");
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
   TLine *line = new TLine(-60,0,-7.594711,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.594711,-0.2977026,-7.594711,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1051 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1051->SetFillColor(19);
   mainFit1051->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1051->SetLineColor(ci);
   mainFit1051->SetLineWidth(2);
   mainFit1051->SetChisquare(9.650408);
   mainFit1051->SetNDF(9);
   mainFit1051->GetXaxis()->SetLabelFont(42);
   mainFit1051->GetXaxis()->SetTitleOffset(1);
   mainFit1051->GetXaxis()->SetTitleFont(42);
   mainFit1051->GetYaxis()->SetLabelFont(42);
   mainFit1051->GetYaxis()->SetTitleFont(42);
   mainFit1051->SetParameter(0,-0.03143848);
   mainFit1051->SetParError(0,0.003845083);
   mainFit1051->SetParLimits(0,0,0);
   mainFit1051->SetParameter(1,-0.004139523);
   mainFit1051->SetParError(1,0.0001215922);
   mainFit1051->SetParLimits(1,0,0);
   mainFit1051->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
