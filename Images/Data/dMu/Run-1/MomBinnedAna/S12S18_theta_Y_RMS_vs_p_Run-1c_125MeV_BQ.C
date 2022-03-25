void S12S18_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6813,0.6541532,3034.593,32.58379);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1175[22] = {
   367.0185,
   457.1218,
   570.1528,
   694.8141,
   815.8616,
   938.5523,
   1062.831,
   1188.305,
   1312.636,
   1435.862,
   1561.962,
   1685.209,
   1810.569,
   1935.052,
   2060.277,
   2184.947,
   2309.054,
   2433.112,
   2559.619,
   2678.432,
   2781.123,
   2887.327};
   Double_t Graph0_fy1175[22] = {
   35.18514,
   31.12372,
   26.58834,
   23.31599,
   20.3583,
   18.70332,
   17.26245,
   16.07321,
   15.03752,
   14.03004,
   13.13937,
   12.00469,
   11.09349,
   10.18328,
   9.345409,
   8.555964,
   7.748902,
   6.928135,
   6.153634,
   5.471817,
   4.981398,
   4.670234};
   Double_t Graph0_fex1175[22] = {
   0.1534774,
   0.07541461,
   0.05017119,
   0.0346395,
   0.02780283,
   0.02511147,
   0.02377681,
   0.0230726,
   0.02344017,
   0.02357682,
   0.02539003,
   0.02675328,
   0.03020717,
   0.03307373,
   0.03793287,
   0.04196719,
   0.04847618,
   0.05840789,
   0.06974521,
   0.08044594,
   0.1649024,
   1.019721};
   Double_t Graph0_fey1175[22] = {
   0.6009508,
   0.0549267,
   0.02666141,
   0.01614661,
   0.01118675,
   0.009197684,
   0.008078461,
   0.007303556,
   0.006880516,
   0.006522431,
   0.006533913,
   0.006331438,
   0.006565764,
   0.006630711,
   0.00693388,
   0.007056235,
   0.00737994,
   0.007957635,
   0.008431486,
   0.009199229,
   0.02304475,
   0.3624804};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1175,Graph0_fy1175,Graph0_fex1175,Graph0_fey1175);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01175 = new TH1F("Graph_Graph01175","S12S18",100,114.7168,3140.495);
   Graph_Graph01175->SetMinimum(3.847117);
   Graph_Graph01175->SetMaximum(29.39082);
   Graph_Graph01175->SetDirectory(0);
   Graph_Graph01175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01175->SetLineColor(ci);
   Graph_Graph01175->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01175->GetXaxis()->SetRange(21,88);
   Graph_Graph01175->GetXaxis()->CenterTitle(true);
   Graph_Graph01175->GetXaxis()->SetLabelFont(42);
   Graph_Graph01175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01175->GetXaxis()->SetTitleFont(42);
   Graph_Graph01175->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01175->GetYaxis()->CenterTitle(true);
   Graph_Graph01175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01175->GetYaxis()->SetLabelFont(42);
   Graph_Graph01175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01175->GetYaxis()->SetTitleFont(42);
   Graph_Graph01175->GetZaxis()->SetLabelFont(42);
   Graph_Graph01175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01175);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
