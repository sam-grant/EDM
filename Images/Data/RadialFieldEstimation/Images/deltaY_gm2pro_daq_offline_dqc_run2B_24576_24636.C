void deltaY_gm2pro_daq_offline_dqc_run2B_24576_24636()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 19:40:13 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(24561,0.2419193,24651,0.4969573);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[29] = {
   24576,
   24577,
   24578,
   24579,
   24580,
   24581,
   24582,
   24583,
   24584,
   24587,
   24588,
   24589,
   24590,
   24591,
   24594,
   24597,
   24604,
   24608,
   24613,
   24616,
   24619,
   24620,
   24621,
   24627,
   24630,
   24631,
   24632,
   24633,
   24636};
   Double_t Graph0_fy1005[29] = {
   0.4028771,
   0.3763386,
   0.3662182,
   0.3525368,
   0.3493896,
   0.3496497,
   0.3386423,
   0.3267428,
   0.3298905,
   0.3257268,
   0.3286244,
   0.3239489,
   0.3089034,
   0.3095802,
   0.304377,
   0.2903455,
   0.2932098,
   0.2931573,
   0.2987226,
   0.3044308,
   0.3383622,
   0.328835,
   0.3425289,
   0.4127357,
   0.3635572,
   0.3926164,
   0.399796,
   0.4087274,
   0.4131326};
   Double_t Graph0_fex1005[29] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1005[29] = {
   0.01146036,
   0.004328586,
   0.004062471,
   0.005911164,
   0.004030048,
   0.004104693,
   0.003842336,
   0.003997438,
   0.003975246,
   0.003768542,
   0.004135795,
   0.003955122,
   0.004126932,
   0.005592223,
   0.004189813,
   0.005919879,
   0.004087629,
   0.003851336,
   0.003884066,
   0.004023701,
   0.004094535,
   0.00467521,
   0.00467223,
   0.04171531,
   0.005521108,
   0.003951834,
   0.003816456,
   0.003867073,
   0.004005861};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#Delta#LTy_{calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,24570,24642);
   Graph_Graph1005->SetMinimum(0.2674231);
   Graph_Graph1005->SetMaximum(0.4714535);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Run number");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#Delta#LTy_{calo}#GT [mm]");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
