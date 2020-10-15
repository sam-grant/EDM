void FieldFit_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 22:34:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1987151,45,0.142569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1117[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1117[4] = {
   0.08239224,
   0.004456234,
   -0.07300816,
   -0.1385383};
   Double_t Graph0_fex1117[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1117[4] = {
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1117,Graph0_fy1117,Graph0_fex1117,Graph0_fey1117);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01117 = new TH1F("Graph_Graph01117","Sub-runs 250",100,-36,36);
   Graph_Graph01117->SetMinimum(-0.1645867);
   Graph_Graph01117->SetMaximum(0.1084406);
   Graph_Graph01117->SetDirectory(0);
   Graph_Graph01117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01117->SetLineColor(ci);
   Graph_Graph01117->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01117->GetXaxis()->CenterTitle(true);
   Graph_Graph01117->GetXaxis()->SetLabelFont(42);
   Graph_Graph01117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01117->GetXaxis()->SetTitleFont(42);
   Graph_Graph01117->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01117->GetYaxis()->CenterTitle(true);
   Graph_Graph01117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01117->GetYaxis()->SetLabelFont(42);
   Graph_Graph01117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01117->GetYaxis()->SetTitleFont(42);
   Graph_Graph01117->GetZaxis()->SetLabelFont(42);
   Graph_Graph01117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01117);
   
   
   TF1 *mainFit1118 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1118->SetFillColor(19);
   mainFit1118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1118->SetLineColor(ci);
   mainFit1118->SetLineWidth(2);
   mainFit1118->SetChisquare(4.146233);
   mainFit1118->SetNDF(2);
   mainFit1118->GetXaxis()->SetLabelFont(42);
   mainFit1118->GetXaxis()->SetTitleOffset(1);
   mainFit1118->GetXaxis()->SetTitleFont(42);
   mainFit1118->GetYaxis()->SetLabelFont(42);
   mainFit1118->GetYaxis()->SetTitleFont(42);
   mainFit1118->SetParameter(0,-0.0311745);
   mainFit1118->SetParError(0,0.00164805);
   mainFit1118->SetParLimits(0,0,0);
   mainFit1118->SetParameter(1,-0.00370128);
   mainFit1118->SetParError(1,7.370302e-05);
   mainFit1118->SetParLimits(1,0,0);
   mainFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1118);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.07");
   pt_LaTex = pt->AddText("#minus0.0037#pm7.37e-05");
   pt_LaTex = pt->AddText("#minus0.0312#pm0.00165");
   pt_LaTex = pt->AddText("#minus8.42#pm0.476");
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
   TLine *line = new TLine(-36,0,-8.422626,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.422626,-0.1645867,-8.422626,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1119 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1119->SetFillColor(19);
   mainFit1119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1119->SetLineColor(ci);
   mainFit1119->SetLineWidth(2);
   mainFit1119->SetChisquare(4.146233);
   mainFit1119->SetNDF(2);
   mainFit1119->GetXaxis()->SetLabelFont(42);
   mainFit1119->GetXaxis()->SetTitleOffset(1);
   mainFit1119->GetXaxis()->SetTitleFont(42);
   mainFit1119->GetYaxis()->SetLabelFont(42);
   mainFit1119->GetYaxis()->SetTitleFont(42);
   mainFit1119->SetParameter(0,-0.0311745);
   mainFit1119->SetParError(0,0.00164805);
   mainFit1119->SetParLimits(0,0,0);
   mainFit1119->SetParameter(1,-0.00370128);
   mainFit1119->SetParError(1,7.370302e-05);
   mainFit1119->SetParLimits(1,0,0);
   mainFit1119->Draw("same");
   
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
