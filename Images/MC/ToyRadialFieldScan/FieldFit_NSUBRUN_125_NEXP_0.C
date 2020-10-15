void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 22:34:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.200897,45,0.1511737);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1057[4] = {
   0.0878271,
   0.01173497,
   -0.0791649,
   -0.1375504};
   Double_t Graph0_fex1057[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1057[4] = {
   0.004668138,
   0.004668138,
   0.004668138,
   0.004668138};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","Sub-runs 125",100,-36,36);
   Graph_Graph01057->SetMinimum(-0.1656899);
   Graph_Graph01057->SetMaximum(0.1159666);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   
   TF1 *mainFit1058 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1058->SetFillColor(19);
   mainFit1058->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1058->SetLineColor(ci);
   mainFit1058->SetLineWidth(2);
   mainFit1058->SetChisquare(8.73505);
   mainFit1058->SetNDF(2);
   mainFit1058->GetXaxis()->SetLabelFont(42);
   mainFit1058->GetXaxis()->SetTitleOffset(1);
   mainFit1058->GetXaxis()->SetTitleFont(42);
   mainFit1058->GetYaxis()->SetLabelFont(42);
   mainFit1058->GetYaxis()->SetTitleFont(42);
   mainFit1058->SetParameter(0,-0.02928832);
   mainFit1058->SetParError(0,0.002334069);
   mainFit1058->SetParLimits(0,0,0);
   mainFit1058->SetParameter(1,-0.003835162);
   mainFit1058->SetParError(1,0.0001043827);
   mainFit1058->SetParLimits(1,0,0);
   mainFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1058);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 4.37");
   pt_LaTex = pt->AddText("#minus0.00384#pm0.000104");
   pt_LaTex = pt->AddText("#minus0.0293#pm0.00233");
   pt_LaTex = pt->AddText("#minus7.64#pm0.643");
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
   TLine *line = new TLine(-36,0,-7.636787,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.636787,-0.1656899,-7.636787,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1059 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1059->SetFillColor(19);
   mainFit1059->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1059->SetLineColor(ci);
   mainFit1059->SetLineWidth(2);
   mainFit1059->SetChisquare(8.73505);
   mainFit1059->SetNDF(2);
   mainFit1059->GetXaxis()->SetLabelFont(42);
   mainFit1059->GetXaxis()->SetTitleOffset(1);
   mainFit1059->GetXaxis()->SetTitleFont(42);
   mainFit1059->GetYaxis()->SetLabelFont(42);
   mainFit1059->GetYaxis()->SetTitleFont(42);
   mainFit1059->SetParameter(0,-0.02928832);
   mainFit1059->SetParError(0,0.002334069);
   mainFit1059->SetParLimits(0,0,0);
   mainFit1059->SetParameter(1,-0.003835162);
   mainFit1059->SetParError(1,0.0001043827);
   mainFit1059->SetParLimits(1,0,0);
   mainFit1059->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 125");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
